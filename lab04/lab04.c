//Daniel Ferreira Santin 32037139
//Joao Paulo Bulhoes Pequeno 32089988

#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define CHAVE 321

int main()
{
    //Valor inicial
    int valor = 1;

    //Criando  memoria compartilhada
    int tam = sizeof(int);
    int id_memcomp;
    char *caminho = "./";

    if ((id_memcomp = shmget(ftok(caminho, CHAVE), tam, IPC_CREAT | IPC_EXCL | SHM_R | SHM_W)) == -1)
    {
        printf("Erro ao criar espaco de memoria compartilhada!!!\n");
        exit(1);
    }

    //Imprimindo valor
    printf("Processo pai: Valor = %d\n", valor);

    //Criando processo filho
    pid_t pid;
    pid = fork();

    if (pid == -1)
    {
        printf("Processo pai: Fork falhou!!!\n");
        exit(1);
    }
    else if (pid == 0)
    {
        //Processo filho
        //Acoplando memoria
        int *valor_mem;
        if (*(valor_mem = (int *)shmat(id_memcomp, 0, 0)) == -1)
        {
            printf("Processo filho: Acoplamento falhou!!!\n");
            exit(1);
        }
        
        //Operacao
        *valor_mem = valor + 2;
        printf("Processo filho: Novo valor = %d\n", *valor_mem);
        exit(0);
    }
    else
    {   
        //Processo pai

        //Esperando filho
        int statusFilho;
        waitpid(pid, &statusFilho, 0);
        if (statusFilho != 0)
        {
            printf("Processo pai: Falha no filho!!!\n");
            exit(1);
        }

        //Acoplando memoria
        int *valor_mem;
        if (*(valor_mem = (int *)shmat(id_memcomp, 0, 0)) == -1)
        {
            printf("Processo pai: Acoplamento falhou!!!\n");
            exit(1);
        }

        //Operacao
        *valor_mem = *valor_mem * 4;
        printf("Processo pai: Novo valor = %d\n", *valor_mem);

        //Apagando memoria
        if (shmctl(id_memcomp, IPC_RMID, NULL) == -1)
        {
            printf("Processo pai: Falha no CTL!!!\n");
            exit(1);
        }

        exit(0);
    }

    return 0;
}

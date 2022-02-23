#include <stdio.h>
#include <stdlib.h>

int main(){
    char palavra1[100], palavra2[100];

    printf("Digite o primeiro nome: ");
    scanf("%s", &palavra1);


    printf("Digite o segundo nome: ");
    scanf("%s", &palavra2);

    printf("\n");

    int retorno;
    retorno = strcoll(palavra2, palavra1);

    if(retorno == 1){
        printf("%s\n%s\n", palavra1,palavra2);

    }
    else{
        printf("%s\n%s\n", palavra2,palavra1);

    }
    return 0;
}

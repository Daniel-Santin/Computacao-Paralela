#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// João Paulo Bulhões Pequeno - TIA: 32089988
// Daniel Ferreira Santin - TIA: 32037139

typedef struct{
  char nome[100];
  int idade;
  float altura;
}Pessoa;

void NomeArquivoEntrada(char * nome)
{
  printf("Digite o nome do arquivo: ");
  scanf("%s", nome);
  printf("\n");
}

int LerDados(Pessoa * p, FILE * Arq)
{
  if (!feof(Arq))
  {
    char l[100];
    fgets(l,sizeof(l),Arq);
    strcpy(p->nome, l);
    fgets(l,sizeof(l),Arq);
    p->idade = atoi(l);
    fgets(l,sizeof(l),Arq);
    p->altura = atof(l);
    return 1;
  }
  return 0;
}

void FechaArquivo(FILE * Arq)
{
  fclose(Arq);
}

int Comp (const void * a, const void * b)
{
  Pessoa *pA = (Pessoa *) a;
  Pessoa *pB = (Pessoa *) b;
  return pA->altura > pB->altura ? -1:1;
}

void OrdenaVetor(Pessoa * Povo, int i)
{
  qsort( Povo, i, sizeof(Pessoa), Comp);
}

void ImprimeVetor(Pessoa * Povo, int i)
{
  int j = 0;
  for (j; j < i; j++){
    printf("Nome: %sIdade: %d\nAltura: %.2f\n",
    Povo[j].nome,
    Povo[j].idade,
    Povo[j].altura
    );
    printf("\n");
  };
}

int main(void) {
  
  char s1[50];
  Pessoa Povo[10], p;
  FILE *Arq;
  int i = 0;

  printf("Nome do Arquivo: ");
  scanf("%s", s1);

  Arq = fopen(s1, "r");
  if (Arq != NULL)
  {
    while (1)
    {
      if (LerDados(&p, Arq))
      {
        Povo[i] = p;
        i++;
      }
      
      else { break; }
    }
    
    FechaArquivo(Arq);

    OrdenaVetor(Povo, i);

    ImprimeVetor(Povo, i);
  
  }

  else { printf("Erro na abertura do arquivo\n"); }


  FILE *Novo = fopen("RegistroOrdenado.txt","w");
  int j = 0;
  for (j; j < i; j++)
  {
      fprintf(Novo,"Nome: %sIdade: %d\nAltura: %.2f\n",
            Povo[j].nome,
            Povo[j].idade,
            Povo[j].altura,
            "\n"
            );

  }
  
  
  return 0;
}

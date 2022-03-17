#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
  char nome[100];
  int idade;
  float altura;
}Pessoa;

void LerNomeArq(char * nome)
{
  printf("Nome do Arquivo: ");
  scanf("%s", nome);
  printf("\n");
}

int LerDados(Pessoa * p, FILE * arq)
{
  if (!feof(arq))
  {
    char l[100];
    fgets(l,sizeof(l),arq);
    strcpy(p->nome, l);
    fgets(l,sizeof(l),arq);
    p->idade = atoi(l);
    fgets(l,sizeof(l),arq);
    p->altura = atof(l);
    return 1;
  }
  return 0;
}

void FechaArquivo(FILE * arq)
{
  fclose(arq);
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
  FILE *arq;
  int i = 0;

  printf("Nome do Arquivo: ");
  scanf("%s", s1);

  arq = fopen(s1, "r");
  if (arq != NULL)
  {
    while (1)
    {
      if (LerDados(&p, arq))
      {
        Povo[i] = p;
        i++;
      }
      
      else { break; }
    }
    
    FechaArquivo(arq);

    OrdenaVetor(Povo, i);

    ImprimeVetor(Povo, i);
  
  }

  else { printf("Erro na abertura do arquivo"); }
  
  return 0;
}

#include <stdio.h>

int multLinha(int n, int m);
int main()
{
	int n,m;
	printf("Digite a quantidade de linhas da matriz : ");
	scanf("%d",&n);

	printf("Digite a quantidade de colunas da matriz : ");
	scanf("%d",&m);

    multColuna(n,m);
}

int multLinha(int n, int m)
{
    int i,j,x,l;
    int matriz[n][m];

	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("Digite os elementos da Matriz[%d][%d]",i,j);
			scanf("%d",&matriz[i][j]);
		}
	}

    printf("Digite a linha a ser multiplicada : ");
    scanf("%d",&l);

    printf("Digite o numero para multiplicar a matriz : ");
	scanf("%d",&x);
	for(i=0 +l-1;i<l;i++){
        for(j=0;j<m;j++){
		matriz[i][j]=matriz[i][j]*x;
        }
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d",matriz[i][j]);			
		}
		printf("\n");	
	}
}
int multColuna(int n, int m)
{
    int i,j,x,l;
    int matriz[n][m];

	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("Digite os elementos da Matriz[%d][%d]",i,j);
			scanf("%d",&matriz[i][j]);
		}
	}

    printf("Digite a coluna a ser multiplicada : ");
    scanf("%d",&l);

    printf("Digite o numero para multiplicar a matriz : ");
	scanf("%d",&x);
	for(i=0;i<n;i++){
        for(j=l-1;j<l;j++){
		matriz[i][j]=matriz[i][j]*x;
        }
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d",matriz[i][j]);			
		}
		printf("\n");	
	}
}
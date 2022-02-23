#include <stdio.h>
int main()
{
	int i,j,n,m,x;
	printf("Digite a quantidade de linhas da matriz : ");
	scanf("%d",&n);

	printf("Digite a quantidade de colunas da matriz : ");
	scanf("%d",&m);
	int matriz[n][m];

	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("Digite os elementos da Matriz[%d][%d]",i,j);
			scanf("%d",&matriz[i][j]);
		}
	}
	printf("Digite o numero para multiplicar a matriz : ");
	scanf("%d",&x);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			matriz[i][j]=matriz[i][j]*x;
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++)
		{
			printf("%d",matriz[i][j]);			
		}
		printf("\n");	
	}
}

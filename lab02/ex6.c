#include <stdio.h>
int main()
{
    int n,m;
    printf("Digite a quantidade de linhas da matriz : ");
    scanf("%d",&n);

    printf("Digite a quantidade de colunas da matriz : ");
    scanf("%d",&m);

    int i,j,x;
    int matriz[n][m];
    int trans [m][n];
    for(i = 0;i < n;i++){
        for(j=0;j<m;j++){
            printf("Digite os elementos da Matriz[%d][%d]->",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }
    printf("Matriz Original:\n");
    for(i = 0;i < n;i++){
        for(j = 0;j<m;j++)
        {
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < n; i++){     
        for(j = 0; j < m; j++){
            trans [j][i] = matriz [i][j];
        }
    }

    printf("\nMatriz Transposta:\n");
    for(i = 0; i < m; i++ ){
        for(j = 0; j < n; j++){
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }
}
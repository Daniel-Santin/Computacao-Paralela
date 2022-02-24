#include <stdio.h>
#include <time.h>

int mult();
int soma();

int main()
{
    
    soma();
    mult();
}

int soma()
{
    int i,j,x;
    int matriz[2][2] ={ 5,10,20,30 };

        for (j = 0; j < 2; j++)
        {
           matriz[1][j] = matriz[0][j] + matriz[1][j]; 
        }

    for(i=0;i<2;i++){
        for (j = 0; j < 2; j++){
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
}
int mult()
{
    int i,j,x;
    int matriz[2][2] ={ 5,10,20,30 };

        for (j = 0; j < 2; j++)
        {
           matriz[1][j] = matriz[0][j] * matriz[1][j]; 
        }

    for(i=0;i<2;i++){
        for (j = 0; j < 2; j++){
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
}
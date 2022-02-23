#include <stdio.h>

int main()
{
    int i,j,Matriz[3][3] = {4,6,8,2,5,9,7,1,3};
    int Menor = Matriz [0][0];
    int LMenor = 0;

    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            if (Matriz[i][j] < Menor)
            {
                Menor = Matriz[i][j];
                LMenor = i+1;
            }
        } 
    }

    printf("A linha com o menor numero e ");
    printf("%d",LMenor);
    
    return(0);
}

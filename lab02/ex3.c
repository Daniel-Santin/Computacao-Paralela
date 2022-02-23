#include <stdio.h>
int main() {
    int n, i, j;

    printf("\n"); 
    printf("Atencao, o numero digitado deve ser impar.\n");
    printf("Digite o numero maximo do triangulo: ");
    scanf("%d", &n);
    printf("\n");
    
    while (n % 2 == 0)
     {
        printf("Numero invalido.\n");
        printf("Digite novamente: ");
        scanf("%d", &n);
        printf("\n");
    }

    if (n % 2 == 1)
    {
        for( i = 0; i<= (n / 2) + 1; i++)
        {
            for ( j = i + 1; j <= n - i; j++ )
            {
                printf("%d ",j);
            }

            printf("\n");

            for ( j = 0; j < (i + 1) * 2; j++ )
            printf(" ");
        }
    }
}

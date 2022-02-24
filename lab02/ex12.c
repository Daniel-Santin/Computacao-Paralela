#include <stdio.h>
#include <stdlib.h>

int remover(char *str, char obj)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == obj)
        {
            return i;
        }
        i++;
    }
    return -1;
}

int main()
{
    int tmaximo;
    printf("Digite o tamanho da string: ");
    scanf("%d", &tmaximo);

    char *str = malloc(sizeof(char) * tmaximo);
    char obj;

    printf("Digite a string: ");
    scanf("%s",str);

    printf("Digite o caracter: ");
    scanf(" %c",&obj);

    printf("Posicao: %d",remover(str,obj));

    return 0;
}
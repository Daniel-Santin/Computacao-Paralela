#include <stdio.h>
#include <string.h>

void Remover(char * j, int pos){
    int i = strlen(j);
    if (pos < i){
        for (pos; pos < i; pos++){
            *(j + pos) = *(j + pos + 1);
        }
    }
}

int main() {
    char teste[100] = "Essa string possui um easkter egg em easter egg";
    
    printf("\nRemovendo o na posicao 13:");
    Remover(teste, 13);
    printf("\n%s\n", teste);
    
    printf("\nRemovendo E na posicao 0:");
    Remover(teste, 0);
    printf("\n%s\n", teste);

    printf("\nRemovendo o 'easter egg' em easter egg:");
    Remover(teste, 23);
    printf("\n%s\n", teste);
}
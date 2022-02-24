#include <stdio.h>
#include <string.h>

void InsereChar(char * j, int pos, char * p){
    int i = strlen(j);
    if (pos > i){
        *(j+i) = p[0];
    }
    else{
        for (i; i > pos; i--){
            *(j+i) = *(j + i - 1);
        }
        *(j+pos) = p[0];
    }
}

int main() {
    
    char teste[100] = "Essa string possui um easkter egg em easter egg";
    printf("\nInserindo O na posicao 30:");
    InsereChar(teste, 30, "O");
    printf("\n%s\n", teste);
    
    printf("\nInserindo K na posicao 60:");
    InsereChar(teste, 60, "K");
    printf("\n%s\n", teste);

    
}
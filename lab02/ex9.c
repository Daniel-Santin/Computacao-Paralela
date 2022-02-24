
#include <stdio.h>


void PrintMatriz(int ** mat, int tamL, int tamC){
    int j = 0;
    printf("\nMatriz %dx%d\n", tamL, tamC);
	for (j; j < tamL; j ++){
	    int i = 0;
		for (i; i < tamC; i++){
		    printf("%d ", * ( *(mat + j) + i));
		}
	    printf("\n");
	}
}

int main() {
    int tamL = 4;
    int tamC = 5;
	
	int ** matriz = malloc(tamL * sizeof(int*));
	int i = 0;
	for (i; i < tamL; i ++){
		int j = 0;
		*(matriz + i) = malloc (tamC * sizeof(int));
		for (j; j < tamC; j++){
			* ( *(matriz + i) + j) = i - j;
		}
	}
	
	PrintMatriz(matriz, tamL, tamC);
    printf("\nModulo\n");
    
	int l = 0;
	for (l; l < tamL; l ++){
	    int k = 0;
		for (k; k < tamC; k++){
		    if (* ( *(matriz + l) + k) < 0 ){
		        * ( *(matriz + l) + k) = * ( *(matriz + l) + k) * -1;
		    }
		}
	}
	
	PrintMatriz(matriz,tamL, tamC);
	
    return 0;
}
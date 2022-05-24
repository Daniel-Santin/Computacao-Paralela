//Daniel Ferreira Santin - TIA:32037139
//João Paulo Bulhões Pequeno - TIA:32089988
#include <stdio.h>
#include <stdlib.h>
int main(){
    double T = 1000000;
    double aux;
    for (double x = 1; x <= T; x++){
		aux += 1/x;
	}
    printf("Resultado: %f",aux);
}
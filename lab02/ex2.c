#include <stdio.h>

int main() 
{

    float N1, N2, N3;

    printf("Nota n1: ");
    scanf("%f", &N1);

    printf("Nota n2: ");
    scanf("%f", &N2);

    printf("Nota n3: ");
    scanf("%f", &N3);


    float ME = (N1 + N2 + N3) / 3;
    float MA = (N1 + N2 * 2 + N3 * 3 + ME) / 7;

    if (MA >= 9) printf("A");
    if (MA >= 7.5 && MA < 9) printf("B");
    if (MA >= 6 && MA < 7.5) printf("C");
    if (MA >= 4 && MA < 6) printf("D");
    if (MA < 4) printf("E");
}
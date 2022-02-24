#include <stdio.h>
#include <string.h>

typedef struct{
    char * nome; 
    int idade;
    float peso;
    float altura;
} pessoa;

pessoa Nomes(char * n, int i, float pe, float a){
    pessoa p;
    p.nome = n;
    p.idade = i;
    p.peso = pe;
    p.altura = a;
    return p;
}

void Info(pessoa p){
    printf("\nNome: %s\n"
            "Idade: %d\n"
            "Peso: %f\n"
            "Altura: %f\n",
        p.nome,p.idade,p.peso,p.altura);
}

int main() {    
    pessoa vP[3];
    int i = 0;
    char nomeum[100];
    char nomedois[100];
    char nometres[100];
    int idade;
    float peso;
    float altura;
    
    for (i; i < 3; i++){
        printf("\nNome %d\n:", i + 1); 
        if (i == 0){ 
            scanf("%s", &nomeum);
        }
        else if (i == 1){
             scanf("%s", &nomedois); 
        }
        else{
             scanf("%s", &nometres);
        }
        
        printf("Idade %d\n:", i + 1);
        scanf("%d", &idade);
        printf("Peso %d\n:", i + 1);
        scanf("%f", &peso);
        printf("Altura %d\n:", i + 1);
        scanf("%f", &altura);
        
        if (i == 0){ 
            vP[i] = Nomes(nomeum, idade, peso, altura);
        }
        
        else if (i == 1){
             vP[i] = Nomes(nomedois, idade, peso, altura); 
        }
        
        else{ 
            vP[i] = Nomes(nometres, idade, peso, altura); 
        }     
    }
    Info(vP[0]);
    Info(vP[1]);
    Info(vP[2]);
}
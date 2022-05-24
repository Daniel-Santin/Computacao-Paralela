//Daniel Ferreira Santin - TIA:32037139
//João Paulo Bulhões Pequeno - TIA:32089988
#ifdef _OPENMP
# include <omp.h>
#endif
#include <stdio.h>
#include <stdlib.h>
#define thread_count 2

double total;//Total tem que ser global, pois a cada resultado da thread ele precisa armazenar em algum lugar para da o resultado no final
double T = 1000000;

double Taylor()
{
	int at = omp_get_thread_num();//Pega o numero da thread atual
   	double aux;
  	double minimo;
  	double maximo;
  	
  	minimo = (T /2) * at;//O mínimo é o valor de T dividido pela quantidade de thread vezes a thread atual
	maximo = (T / 2) + minimo;
  	for (double t = minimo + 1; t <= maximo; t++){
		aux += 1/t;
	}

	#pragma omp critical
	total += aux;
}

int main()
{	
	double t;

	#pragma omp parallel num_threads(thread_count)
	{
		Taylor();
	}	 
	printf("Resultado: %f\n",total);
}
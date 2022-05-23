#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#define thread_count 2

double J = 0;

void Taylor(int t)
{
	double aux;
	aux = 1/t;
  	#pragma omp critical
    J += aux;
}

int main()
{
   J = 0;
   #pragma omp parallel for num_threads(thread_count)
   int t ;
   for (t = 0; t <= 1000; t++){
   Taylor (t);
   }
   printf("J = %f", J);
   return 0; 
}



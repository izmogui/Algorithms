#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10000

int main(int argc, char *argv[]){
	
	int vector[SIZE];
	int i = 0;
	int j = 0;
	int aux = 0;
	clock_t start, diff;
	
	int k = 0;
	for(k = 0; k < SIZE; ++k)
	{
		vector[k] = rand();
	}

	start = clock();

	for(i = 0; i < SIZE; ++i)
	{
		for(j = 0; j < i; ++j)
		{
			if(vector[i] < vector[j])
			{
				aux = vector[j];
				vector[j] = vector[i];
				vector[i] = aux;
			}
		}
	}

	diff = clock() - start;

	int msec = diff * 1000 / CLOCKS_PER_SEC;
	printf("Elapsed time: %d milliseconds\n", msec);

	/*
	i = 0;
	while(i < sizeof(vector)/sizeof(int)){
		printf("%d ", vector[i]);
		i++;
	}
	printf("\n");
	*/

	return(0);
}

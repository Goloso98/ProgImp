#include <stdio.h>

#define MAX 1000

int amplitude(int vec[], int size)
{
	int max, min;
	max = vec[0];
	min = vec[0];
	
	for(int i = 1; i < size; i++)
	{
		if (vec[i] > max)
			max = vec[i];
		if (min > vec[i])
			min = vec[i];
	}
	
	return max - min;
}

int main(void)
{
	int N, vec[MAX];
	
	printf("Indique o tamanho do vetor(max 1000): ");
	scanf("%d", &N);
	printf("Insira os valores: \n");
	
	if(N > 1000)
		N = MAX;
	
	for(int i = 0; i < N; i++)
	{
		scanf("%d", &vec[i]);
	}
	
	printf("A amplitude dos valores e %d...\n", amplitude(vec, N));
	return 0;
}

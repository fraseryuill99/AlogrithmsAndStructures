#include <time.h>
#include <stdio.h>

void code()
{
	for(int i = 0; i < 10000; i++)
		printf(".");
		
	printf("\n");
}

int main()
{
	clock_t t;
	double t2[3];
	double t3 = 0;
	double average = 0;
	printf("start: %d \n", (int) (t=clock()));
	
	for(int i = 0; i < 4; i++)
	{
		code();
	
		printf("stop: %d \n", (int) (t=clock()-t));
		printf("Elapsed: %f seconds\n", (double) t/CLOCKS_PER_SEC);
		
		t2[i] = t/CLOCKS_PER_SEC;
	}
	
	for(int j = 0; j < 4; j++)
	{
		t3 = t3 + t2[j];
	}
	
	average = t3/3;
	printf("average time %f seconds\n", average);
	
	return 0;
}
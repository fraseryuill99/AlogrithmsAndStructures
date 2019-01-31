#include <stdio.h>

void enqueue(int *arr, int item, int *pfront, int *prear)
{
	if(*prear == MAX - 1)
	{
		printf("queue is full \n");
		return;
	}
	
	else
	{
		printf("ENqueuing: %d\n", item);
		(*prear)++;
		arr[*prear] = item;
		
		if(*pfront == -1)
			*pfront = 0;
	}
}

int empty(int *pfront)
{
	if (*pfront == -1)
	{
		printf("queue is empty\n");
		return 1;
	}
	
	else
		return 0;
}

int dequeue(int *arr, int *pfront, int *prear)
{
	int data = arr[*pfront];
	printf("dequeuing : %d\n", data);
	
	arr[*pfront] = 0;
	
	if(*pfront == *prear)
		*pfront = *prear = -1;
	
	else
		(*pfront)++;
	
	return data;
}

int main(void)
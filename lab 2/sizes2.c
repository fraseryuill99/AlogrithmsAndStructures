#include <stdio.h>

int main()
{
	int a[100];
	printf("%zu bytes\n", sizeof(a));
	
	printf("space for storing %zu elements\n", sizeof(a)/sizeof(int));
	
	return 0;
}
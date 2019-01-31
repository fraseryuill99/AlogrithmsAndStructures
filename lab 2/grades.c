#include <stdlib.h>
#include <stdio.h>

int main()
{
	char grades[6] = "ccdbcc";
	
	for(int i = 0; i < 6; i++)
		printf("%c\n", grades[i]);
	
	char *grades2;
	
	grades2 = malloc(sizeof(grades));
	strcpy(grades2, grades);
	
	strcat(grades2, "bcc 40318856");
	
	printf("%s\n", grades2);
		
	return 0;
}
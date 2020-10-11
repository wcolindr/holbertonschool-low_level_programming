#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * 
 * @argc: int is argc
 * 
 * @argv: char is argv
 * 
 * Return: 0 and 1
 */

int main(int argc, char *argv[])
{
    int a, b, mul;
	if(argc - 1 != 2)
	{
		printf("Error\n");
		return 1;
    }
	
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	mul = a * b;
	
	printf("%d", mul);
	
	return 0;

}
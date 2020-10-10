#include <stdio.h>

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
    int a,b,mul;
	if(argc != 2)
	{
		printf("Error\n");
		return 1;
    }
	mul = a * b;
	
	printkf("Production of %d, %d is: %d\n",a,b,mul);
	
	return 0;

}
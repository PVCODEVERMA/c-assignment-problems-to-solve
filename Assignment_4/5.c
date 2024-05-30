//Write a program to print the first N odd natural numbers in reverse order

#include <stdio.h>

int main()
{
    int  i= 10;
	printf("The First 10 Natural Numbers in Reverse\n");

	for (i = 10; i >= 1; i--)
	{
		printf("%d\n", i);
	}
}
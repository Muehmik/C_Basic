/*
输入一个数字。按递增，递减输出星号和等腰三角形。
 */

#include "stdio.h"
#include "string.h"

int main()
{
	int i, j, num;
	printf("Input a Number: ");
	scanf("%d", &num);

	for( i = 1; i <= num; i++)
	{
		for(j = 0; j < i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	printf("============\n");

	for( i = 1; i <= num; i++)
	{
		for(j = num; j >= i; j--)
		{
			printf("*");
		}
		printf("\n");
	}

	printf("============\n");

	for( i = 1; i <= num; i++)
	{
		if(i%2 == 1)
		{
			for(j = num/2; j > i/2; j--)
			{
				printf(" ");
			}
			for(j = 0; j < i; j++)
			{
				printf("*");
			}
		}
		else
		{
			continue;
		}
		printf("\n");
	}


	return 0;
}
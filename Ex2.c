/*
输入一个字母，转换为大(小)写。
若输入数字，重新输入。
 */

#include "stdio.h"
#include "string.h"

#define BOOL int
#define TRUE 1
#define FALSE 0

int main()
{
	char ch;
	BOOL flag = TRUE;

	printf("Please Input a character: ");

	while( flag == TRUE )
	{
		scanf("%c", &ch);
		//getchar();
	
		if(ch >= 'A' && ch <= 'Z')
		{
			ch = ch + 32;
			flag = FALSE;
		}
		else if ( ch >= 'a' && ch <= 'z')
		{
			ch = ch - 32;
			flag = FALSE;
		}
		else
		{
			printf("Please Input again: \n");
		}
	}
	
	return 0;
}
/*
输入字符串，反序输出。
 */

#include "stdio.h"
#include "string.h"

void change(char str[100])
{
	int length = strlen(str);
	char tmp;
	int i;

	for(i = 0; i < length/2; i++)
	{
		tmp = str[i];
		str[i] = str[length-1-i];
		str[length-1-i] = tmp;
	}
}
int main()
{
	char str[100];
	printf("Please Input a String: ");
	gets(str);
	change(str);
	printf("Output: %s\n", str);

	return 0;
}
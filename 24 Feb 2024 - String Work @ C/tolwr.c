#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	printf("Enter the string::");
	gets(str);
	
	strlwr(str);
	
	printf("%s",str);
}

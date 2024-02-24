#include<stdio.h>
int main()
{
	char str[100];
	char *s = str;
	
	printf("Enter the string::");
	gets(str);
	
	while(*s)
	{
		*s = (*s >= 'a' && *s <= 'z') ? *s-32:*s;
		s++;
	}
	printf("%s",str);
}

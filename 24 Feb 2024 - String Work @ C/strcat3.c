#include<stdio.h>
int main()
{
	int i,j;
	char str1[100],str2[100];
	
	char *s1 = str1;
	char *s2 = str2;
	
	printf("Enter the string::");
	gets(str1);
	
	printf("Enter the string::");
	gets(str2);
	
	while(*(++s1));
	
	while(*(s1++)=*(s2++));
	
	printf("%s",str1);
		
}

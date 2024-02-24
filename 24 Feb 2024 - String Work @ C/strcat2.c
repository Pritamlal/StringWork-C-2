#include<stdio.h>
int main()
{
	int i,j;
	char str1[100],str2[100];
	printf("Enter the string::");
	gets(str1);
	printf("Enter the string::");
	gets(str2);
	
	i=-1;
	while(str1[++i]);
	j=0;
	while(str1[i++]=str2[j++]);
	
	printf("%s",str1);
}

#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char str1[100],str2[100];
	printf("Enter the string::");
	gets(str2);
	
	strcpy(str1,str2);
	
	printf("%s\n",str1);
	printf("%s",str2);
	
}

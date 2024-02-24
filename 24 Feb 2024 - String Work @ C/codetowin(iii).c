#include<stdio.h>
int main()
{
	int i;
	char text1[100],text2[100];
	
	char *str1= text1;
	char *str2= text2;
	
	printf("Enter the string::");
	gets(text1);
	
	while(*(str2++)=*(str1++));
	
	printf("%s\n",text1);
	printf("%s",text2);
	
	
}

#include<stdio.h>

int compare(char *str1,char *str2);

int main()
{
	int res,i;
	char str1[100],str2[100];
	printf("Enter the string::");
	gets(str1);
	printf("Enter the string::");
	gets(str2);
	
	res=compare(str1,str2);
	
	if(res==0)printf("equal");
	else if(res<0)printf("lesser");
	else
	printf("greater");
}

int compare(char *str1,char *str2)
{
	while((*str1 && *str2) && (*str1==*str2))
	{
		str1++;
		str2++;
	}
	return *str1-*str2;
}

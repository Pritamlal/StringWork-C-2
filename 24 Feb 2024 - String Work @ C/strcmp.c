#include<stdio.h>

int compare(char *str1,char *str2);

int main()
{
	char str1[100],str2[100];
	int res;
	
	printf("Enter the string::");
	gets(str1);
	printf("Enter the string::");
	gets(str2);
	
	res=compare(str1,str2);
	
	if(res==0)
	printf("equal");
	else if(res<0)
	printf("smaller");
	else
	printf("greater");
	return 0;
}

int compare(char *str1,char *str2)
{
	int i=0;
	while(str1[i]==str2[i])
	{
		if(str1[i]=='\0' && str2[i]=='\0')
		break;
		i++;
	}
	
	return str1[i]-str2[i];
	
}

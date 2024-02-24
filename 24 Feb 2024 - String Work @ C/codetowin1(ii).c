#include<stdio.h>
#define max_size 100
int main()
{							// copy string using while function //
	int i;
	char text1[100],text2[100];
	printf("Enter the string::");
	gets(text1);
	
	while(text1[i]!='\0')
	{
		text2[i]=text1[i];
		i++;
	}
	
	text2[i]='\0';
	
	printf("%s\n",text1);
	printf("%s\n",text2);
	printf("%d",i);
	
}

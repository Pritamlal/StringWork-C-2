#include<stdio.h>
int main()
{
	int i;
	char text1[100],text2[100];
	printf("Enter the string::");
	gets(text1);

	
	for(i=0;text1[i]!='\0';i++)
	{
		text2[i]=text1[i];
	}
	
	text2[i]='\0';
	
	printf("%s \n",text1);
	printf("%s \n",text2);
	printf("%d \n",i);
	
}

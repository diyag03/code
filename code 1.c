#include<stdio.h>
int main(){
	int i,len;
	char c[20];
	printf("enter the string:");
	scanf("%s",&c);
	len=strlen(c);
	for (i=0;i<len;i++)
	{
		if ((c[i]>=65 && c[i]<90) || (c[i]>=97 && c[i]<122) || (c[i]>=48 && c[i]<57))
		{
			printf("%c",c[i]+1);
		}
		else if (c[i]==90)
		{ 
		    printf("%c",65);
		}
		else if (c[i]==122)
		{
		    printf("%c",97);
		}
		else if (c[i]==57)
		{
		    printf("%c",48);
		}
		else if (c[i]==0)
		{
			printf("enter some value");
		}
		else
		{
			printf("please enter a string containing number and alphabets only ");
		}
		
	
}
}

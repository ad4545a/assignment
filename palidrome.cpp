#include<stdio.h>
#include<string.h>
int main()
{
	char a[50];
	gets(a);
	puts(a);
	int i=0,len=0,flag=0;
	while(a[i]!='\0')
	{
		len++;
		i++;
	}
	
	for(int i=0;a[i]!='\0';i++)
	{
		if(a[i]!=a[len-i-1])
		{
			flag++;
			break;
			
		}
	}
	if(flag==0)
	{
		printf("palidrome");
	}
	else
	{
		printf("Not Palidrome");
	}
}

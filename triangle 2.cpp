#include <stdio.h>
int main ()
{
	int n;
	printf("enter the no of the rows and colums in triangle:- ");
	scanf("\n");
	for(int i=1;i<n;i++)
	{
		for(int j=1;j<=2*n+1;j++)
		{
			if(j>=n-(i-1)&&j<=i+(i+1))
			{
				printf("*");
			}
			else
			{
			printf(" ");	
			}
		}
		printf("\n");
	}
	return 0;
}

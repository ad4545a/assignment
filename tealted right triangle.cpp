#include <stdio.h>
int main()
{
	int n;
	printf("enter the no of stars:- ");
	scanf("%d",&n);
	for(int i=n;i>=0;i--)
	{
		for(int j=i;j>=0;j--)
		{
			printf(" *");
		}
		printf("\n");
	}
	return 0;
}

#include <stdio.h>
int main()
{
	int n;
	printf("enter the no of the rows and cloumns:- ");
	scanf("%d",&n);
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=n;j++)
		{
			printf("%d ",i+1);
		}
		printf("\n");
	}
	return 0;
}

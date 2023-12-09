# include <stdio.h>
# include <math.h>
int main ()
{
	int n;
	printf("enter the number:- ");
	scanf("%d",&n);
	int sum=0,c,r;
	c=n;
	while (n>0)
	{
		r=n%10;
		sum+=pow(r,3);
		n=n/10;
	}
	if(sum==c)
	{
		printf("number is angrstrom");
		
	}
	else
	{
		printf("no is not armstroong");
	}
}

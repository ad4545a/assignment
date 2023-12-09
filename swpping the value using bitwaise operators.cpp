# include <stdio.h>
int main()
{
	int n1,n2;
	printf("enter the two numbers:- ");
	scanf("%d%d",&n1,&n2);
	n1=n1^n2;
	n2=n1^n2;
	n1=n2^n1;
	printf("now your interchange no is \n1- %d \n2- %d",n1,n2);
	return 0;
}

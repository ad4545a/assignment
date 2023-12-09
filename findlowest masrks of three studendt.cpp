# include <stdio.h>
int main()
{
	int n1,n2,n3;
	printf("enter the marks of 1st student:- ");
	scanf("%d",&n1);
	printf("enter the marks of 2nd student:- ");
	scanf("%d",&n2);
	printf("enter the marks of 3rd student:- ");
	scanf("%d",&n3);
	if (n1<n2&&n1<n3)
	{
		printf("1st studenet have lowest marks");
	}
		if (n2<n1&&n2<n3)
	{
		printf("2nd studenet have lowest marks");
	}
		if (n3<n1&&n3<n2)
	{
		printf("3rd studenet have lowest marks");
	}
	return 0;
}

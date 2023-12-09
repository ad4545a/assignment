#include<stdio.h>
void add();

int main()
{
	add();
	printf("hello\n");
		add();
	
}
void add()
{
	int a,b,c;
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("\n sum is =%d\n",c);
}

# include <stdio.h>
# include <math.h>
int main ()
{
float t,p,r,amount,interest;
printf("enter the princliple amount:- ");
scanf("%f",&p);
printf("enter the rate:- ");
scanf("%f",&r);
printf("enter the time period:- ");
scanf("%f",&t);

interest = p*pow(1+r/100,t);
amount =  interest-p;
printf("interest:- %.02f",interest);
printf("\ntotal amount:- %.02f",amount);
	return 0;
}

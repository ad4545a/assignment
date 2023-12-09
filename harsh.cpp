#include<stdio.h>

int main()
{
	int current_year,yob,age;
	char a,b;
	printf("Your Name:-");
	scanf("%s %s",&a,&b);
	
	printf("Your year Of Birth:-");
	scanf("%d",&yob);
	
	printf("Year of voting:-  ");
	scanf("%d",&current_year);
	age=current_year-yob;
	
	printf("\nYour age is:%d",age);
	
	if(age>=18){
		printf("\nYou are eligible for voting");
	 int num,n;
	 
	 printf("\nHere are the list of the political parties with voting no.");
	printf("\n1.BJP, press 1 for voting");
	
	printf("\n2.BSP, press 2 for voting");
	
	printf("\n3.AAP, press 3 for voting");
	
	printf("\n4.SP, press 4 for voting");
	
	printf("\n5.CONGRESS, press 5 for voting");
	
	
	 printf("\nEnter the no. between 1 to 5:-");
	 scanf("%d",&n);
	 if(n<=5){
	 
	 num=n;
	switch(num){
		case 1:
			printf(" \nThank you for voting BJP");
			printf("\n Your record has been recorded");
			break;
			case 2:
				printf("\n Thank you for voting BSP");
				printf("\n Your record has been recorded");
				break;
				case 3:
					printf("\nThank you for voting AAP");
					printf("\n Your record has been recorded");
					break;
					case 4:
						printf("\nThank you for voting SP");
						printf("\n Your record has been recorded");
						break;
						case 5:
						printf("\nThank you for voting CONGRESS");
						printf("\n Your record has been recorded");
						break;
					}
						
	}
	else{
		
		printf("\nWrong no. entered");
		printf("\nPlease enter between 1 to 5");
		printf("\nThank you");
	}

}
else
{
	printf("\nYou are not eligible for voting");
}
}

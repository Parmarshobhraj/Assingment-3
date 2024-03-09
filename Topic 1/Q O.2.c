// Write a program to make Simple calculator (to make addition, subtraction,
// multiplication, division and modulo)

#include<stdio.h>
int main(){
	double result,num1,num2;
	printf("enter number 1 :");
	scanf("%lf",&num1);
	
	printf("enter number 2 :");
	scanf("%lf",&num2);
	 
	 result=num1+num2;
	 printf("Addition of two number %.0lf\n",result);
	 
	 result=num1-num2;
	 printf("subtraction of two number %.0lf\n",result);
	 
	 result=num1*num2;
	 printf("multiplication of two number %.0lf\n",result);
	 
	 result=num1/num2;
	 printf("division of two number %.0lf\n",result);
	 
	
}

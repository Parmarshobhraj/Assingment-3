// WAP to make simple calculator (operation include Addition, Subtraction,
// Multiplication, Division, modulo) using conditional statement
#include<stdio.h>
int main(){
	int oper,num1,num2,res;
	printf("select operator");
	scanf("%d",&oper);
	
	printf("enter num1 :");
	scanf("%d",&num1);
	
	printf("enter num2 :");
	scanf("%d",&num2);
	
	if(oper == '+')
	{
		res=num1+num2;
		printf("Addision of two number %d and %d :%d",res,num1,num2);
	}
	else{
		printf("input wrong operator");
	}
}

/*
 WAP to take 10 no. Input from user find out below values
a. How many Even numbers are there
b. How many odd numbers are there
c. Sum of even numbers
d. Sum of odd numbers
*/
#include<stdio.h>
int main(){
	int num,tem,a,sum;
	printf("enter the number :");
	scanf("%d",&num);
	tem=num;
	while(num>0){
		a=num%10;
		sum=sum+(a*a*a);
		num=num/10;
	
	}
	if(tem==sum){
		printf("armstong number ");
	}
	else{
		printf("not a armstong number ");
	}
}

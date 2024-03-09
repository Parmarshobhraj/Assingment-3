#include<stdio.h>
int main(){
	int a,b;  // Declare variable
	
//	accept two integer number by user a,b
	printf("Enter number a :");
	scanf("%d",&a);
	
	printf("Enter number b :");
	scanf("%d",&b);
	
//	declare if...else statement
	if(a==b){         // check condition
		printf("Number is eqal"); 
	}
	else{
		printf("Number is not eqal");
	}
}

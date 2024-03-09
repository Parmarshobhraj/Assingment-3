// check number is positive or negative
#include<stdio.h>
int main(){
	double num;
	printf("enter number :");
	scanf("%lf",&num);   // input num by user
	if(num>0){          // check condition is true or fales
	printf("number is positive");
    }
    else{
    	printf("number is negative");
	}
}

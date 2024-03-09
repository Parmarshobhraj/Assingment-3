// Program of Armstrong Number in C Using For Loop & While Loop
#include<stdio.h>
int main(){
	int num,tem,a,sum;
	printf("enter the number :");
	scanf("%d",&num);
	tem=num;
	for(tem=num;)
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

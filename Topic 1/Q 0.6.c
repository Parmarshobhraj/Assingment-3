// Find area of Triangle Formula : A = 1/2 × b × h

#include<stdio.h>
int main(){
	double b,h,A;
	printf("enter base value :");
	scanf("%lf",&b);
	
	printf("enter hight value :");
	scanf("%lf",&h);
	
	A=0.5*b*h;
	printf("area of triangle:%lf",A);
}

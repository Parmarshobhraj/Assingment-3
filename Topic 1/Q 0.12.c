// Accept number of students from user. I need to give 5 apples to each
// student. How many apples are required?
#include<stdio.h>
int main(){
	int std,apple=5,apples;
//	Accept number of student by user
	printf("enter number of student :");
	scanf("%d",&std);
	   
	apples=std*apple;   // logic for reqired apples
	printf("reqired apples : %d",apples);
}


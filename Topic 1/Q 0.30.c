// WAP to convert years into days and days into years
#include<stdio.h>
int main(){
	int days,year;
	printf("Enter the year :");
	scanf("%d",&year);
	
    days= 365*year ;
	
	printf("number of days : %d\n",days);
	
	printf("Enter the days :");
	scanf("%d",&days);
	
    year= days/365 ;
    printf("number of year : %d\n",year);
	
}

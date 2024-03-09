// Convert years into days and months
#include<stdio.h>
int main(){
	int days,year, months;
	printf("Enter the year :");
	scanf("%d",&year);
	
    days= 365*year ;
	months= 12*year;
	
	printf("number of days : %d\n",days);
	printf("number of months : %d\n",months);
	
}

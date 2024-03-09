// Convert minutes into seconds and hours
#include<stdio.h>
int main(){
	int minutes,seconds,hours;
	printf("Enter the minutes :");
	scanf("%d",&minutes);
	
	hours=minutes/60;
	seconds=minutes*60;
	
	printf("number of seconds : %d\n",seconds);
	printf("number of hours : %d\n",hours);
	
}

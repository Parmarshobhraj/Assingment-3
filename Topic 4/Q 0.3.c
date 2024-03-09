//  3.	WAP to find reverse of string using recursion

#include<stdio.h>
#include<string.h>
void rev(char *str){
	if(*str == '\0'){
		return;
	}
	rev(str +1);
	printf("%c",*str);
}
int main(){
	char str[50];
	printf("Enter the string : ");
	gets(str);
	rev(str);
	
}

// . Find the Character Is Vowel or Not
#include<stdio.h>
int main(){
	char c, vowel;
	printf("enter character :");
	scanf("%c",&c);         // input by user
	//declare vowel 
	vowel =(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
	
	// check condition character is vowel or not
	if(vowel){
	printf("character is vowel");
    }
    else{
    	printf("character is not vowel");
	}
}

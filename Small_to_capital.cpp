//Write a C Program to input any Capital letter and display it with small letter.
#include<stdio.h>
int main(){
	char c;
	printf("Enter the Character in Captial = ");
	scanf("%c",&c);
	printf("In Small: %c",c+32);
	return 0;
}
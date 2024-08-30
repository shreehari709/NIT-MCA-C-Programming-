//Write a C Program to input any Small letter and display it with capital letter.
#include<stdio.h>
int main(){
	char c;
	printf("Enter the Character in small = ");
	scanf("%c",&c);
	printf("In Capital: %c",c-32);
	return 0;
}
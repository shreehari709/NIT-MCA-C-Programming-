//Write a C Program to accept any character from user anddisplay its ASCII number on screen.
#include<stdio.h>
int main(){
	char s;
	printf("Enter the String = ");
	scanf("%c",&s);
	printf("ASCII value of String is %d",s);
	return 0;
}
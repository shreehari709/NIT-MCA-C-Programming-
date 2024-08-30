//Write a C Program to input three digits number from user and calculate sum of first and last digits.
#include<stdio.h>
int main(){
	int a,b,c,d;
	printf("Enter the Three digit Number = ");
	scanf("%d",&a);
	c=a%10;
	d=a/100;
	b=c+d;
	printf("\nSum = %d",b);
	return 0;
}
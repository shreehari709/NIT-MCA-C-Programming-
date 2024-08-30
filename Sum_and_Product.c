//Write a C program that accepts two integers from the user and calculate the sum and product of the two integers.
#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter the Value of Integers = A and B\n");
	scanf("%d %d",&a ,&b);
	c=a*b;
	printf("\nProduct of Integers = %d",c);
	c=a+b;
	printf("\nSum of Integers = %d",c);
	return 0;
}
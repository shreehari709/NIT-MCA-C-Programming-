//Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches and width of 5 inches.
#include<stdio.h>
int main(){
	int l=7;
	int b=5;
	int a,p;
	a=l*b;
	p=2*(l+b);
	printf("Area of Rectangle = %d and \nPerimeter of Retangle = %d\n",a,p);
	return 0;
}
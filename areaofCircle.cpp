//Write a C program to compute the perimeter and area of a circle with a radius of 6 inches.
#include<stdio.h>
int main(){
	int r=6;
	int a,p;
	p=2*(3.14)*r;
	a=2*(3.14)*r*r;
	printf("Area of Circle = %d and \nPerimeter of Circle = %d\n",a,p);
	return 0;
}
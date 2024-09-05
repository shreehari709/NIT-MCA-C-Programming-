//Write a C program to compute the perimeter and area of a circle with a radius of 6 inches.
#include<stdio.h>
int main(){
	float radius=6;
	float perimeter=2*(3.14)*radius;
	float area=2*(3.14)*radius*radius;
	printf("Area of Circle = %f and \nPerimeter of Circle = %f\n",area,perimeter);
	return 0;
}

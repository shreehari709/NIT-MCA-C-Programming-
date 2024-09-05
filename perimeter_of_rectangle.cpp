//Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches and width of 5 inches.
#include<stdio.h>
int main(){
	int height=7, width=5;
	int area=height*width;
	int perimeter=2*(height+width);
	printf("Area of Rectangle = %d and \nPerimeter of Retangle = %d\n",area,perimeter);
	return 0;
}

#include<stdio.h>
/*	int fib(int n){
		while(n>0){
			if(n == 1){
				return 1;
			}else{
				return n * fib(n-1);
			}
		}
		return n;
	}
int main(){
	int n;
	printf("Enter the Number = ");
	scanf("%d",&n);
	int f = fib(n);
	printf("%d",f);
	return 0;
}
*/
//Sum of Natural Numbers Using Recursion
/*int sum(int s){
	if(s == 1){
		return s;
	}else{
		return s + sum(s-1);
	}
}
int main(){
	int n;
	printf("Enter the Number = ");
	scanf("%d",&n);
	int f = sum(n);
	printf("%d",f);
	return 0;
}
*/
/*int fib(int f){
	while(f >0){
			if (f == 1 || f == 2){
		return 1;
	}else{
		return f + fib(f-2);
	}
	}
return f;
}
int main(){
	int n;
	printf("Enter the Number = ");
	scanf("%d",&n);
	int f = fib(n);
	printf("%d",f);
	return 0;
}*/
//C Program to Find Sum of Digit of Number Using Recursive Function
/*int sumofDigit(int n){
	int d,s;
		if(n>0){
			d = n/10;
			s=d + sumofDigit(n);
			return s;
		}else{
			return s;
		}
}
int main(){
	int n;
	printf("Enter the Number = ");
	scanf("%d",&n);
	int f = sumofDigit(n);
	printf("%d",f);
	return 0;
}*/
//Sum of 1+11+111+1111 ... up to n terms using recursive function
/*long generateTerm(int n) {
    if (n == 1) 
        return 1;
    return generateTerm(n - 1) * 10 + 1; 
}
long sumSeries(int n) {
    if (n == 1) 
        return 1;
    return generateTerm(n) + sumSeries(n - 1); 
}
int main() {
    int n;
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);
    long result = sumSeries(n);
    printf("The sum of the series up to %d terms is: %ld\n", n, result);
    return 0;
}*/
//C Program to Read an Array and Displaying its Content
/*int main(){
	int arr[5];
		for ( int i = 0 ; i<5;i++){
		printf("Enter the element of Array = ");
		scanf("%d\n",&arr[i]);
	}
	for ( int i = 0 ; i<5;i++){
		printf("%d\n",arr[i]);
	}
 }*/
 //C Program to Find Sum & Average of n Numbers in Array

 /*	int main(){
	int arr[5];
		for ( int i = 0 ; i<5;i++){
		printf("Enter the element of Array = ");
		scanf("%d\n",&arr[i]);
	}
	for ( int i = 0 ; i<5;i++){
		int a =a+ arr[i];
		printf("Sum of Array = %d\n",a);
	}
 
 	return 0;
 }
*/
//C Program to Reverse Number Using Recursive Function
/*#include <stdio.h>
int reverseNumber(int num, int rev) {
    if (num == 0) 
        return rev;
    rev = rev * 10 + (num % 10); 
    return reverseNumber(num / 10, rev); 
}
int main() {
    int number, reversedNumber;
    printf("Enter a number to reverse: ");
    scanf("%d", &number);
    reversedNumber = reverseNumber(number, 0);
    printf("Reversed number: %d\n", reversedNumber);
    return 0;
}
*/
//7.	Finding Sum of ln(1+x) Using Recursive Function
/*#include <stdio.h>
#include <math.h>
double lnSeries(double x, int n) {
    if (n == 1) 
        return x;
    return pow(-1, n-1) * pow(x, n) / n + lnSeries(x, n - 1);
}
int main() {
    double x;
    int n;
    printf("Enter the value of x: ");
    scanf("%lf", &x);
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);
    double result = lnSeries(x, n);
    printf("The sum of ln(1 + %.2f) up to %d terms is: %.6f\n", x, n, result);
    return 0;
}*/
//9. C Program to Generate Fibonacci Series Using Recursive Function
/*
int fibonacci(int n) {
    return (n <= 1) ? n : fibonacci(n - 1) + fibonacci(n - 2);
}
int main() {
    int terms;
    printf("Enter the number of terms: ");
    scanf("%d", &terms);
    for (int i = 0; i < terms; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    return 0;
}*/
//10. C Program to Find HCF (GCD) and LCM Using Recursive Function
/*#include <stdio.h>
int hcf(int a, int b) {
    return (b == 0) ? a : hcf(b, a % b);
}
int lcm(int a, int b) {
    return (a * b) / hcf(a, b);
}
int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    int gcd = hcf(num1, num2);
    int lcmVal = lcm(num1, num2);
    printf("HCF (GCD) of %d and %d: %d\n", num1, num2, gcd);
    printf("LCM of %d and %d: %d\n", num1, num2, lcmVal);
    return 0;
}*/
//4.	C Program to Find Power Using Recursive Function
/*#include <stdio.h>
int power(int base, int exp) {
    return (exp == 0) ? 1 : base * power(base, exp - 1);
}

int main() {
    int base, exp;
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exp);
    int result = power(base, exp);
    printf("%d^%d = %d\n", base, exp, result);

    return 0;
}*/
//1. C Program to Read an Array and Display its Content
/*#include <stdio.h>
int main() {
    int n, arr[100];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Array elements are:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}*/
//2. C Program to Find Sum & Average of n Numbers in Array
/*#include <stdio.h>

int main() {
    int n, arr[100], sum = 0;
    float average;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    average = (float)sum / n;
    printf("Sum = %d, Average = %.2f\n", sum, average);
    return 0;
}*/
// C Program to Count Even & Odd Numbers in Array
/*#include <stdio.h>

int main() {
    int n, arr[100], even = 0, odd = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even numbers: %d, Odd numbers: %d\n", even, odd);

    return 0;
}*/
//4.	C Program to Find Largest Element From Array
/*#include <stdio.h>
int main() {
    int n, arr[100], largest;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    largest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest)
            largest = arr[i];
    }
    printf("Largest element: %d\n", largest);
    return 0;
}*/
//5.	C Program to Find Smallest Element From Array
#include <stdio.h>
int main() {
    int n, arr[100], smallest;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    smallest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < smallest)
            smallest = arr[i];
    }
    printf("Smallest element: %d\n", smallest);
    return 0;
}















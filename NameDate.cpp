//1.1 	Write a C program to print your name, date of birth and mobile number.
#include<stdio.h>
int main(){
	char name[100], mob[100],dob[100];
	printf("Enter your name = ");
	gets(name);
	printf("Enter your date of Birth = ");
	gets(dob);
	printf("Enter your Mobile Number = ");
	gets(mob);
	printf("Name = %s\nDate of birth = %s\nMobile Number =%s",name,dob,mob);
	return 0;
}

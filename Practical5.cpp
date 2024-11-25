#include<stdio.h>

//1. Square Star Pattern: Print a solid square of stars.
/*int main(){

int n;
printf("Enter the Row = ");
scanf("%d",&n);
for(int i = 1;i<=n;i++){
	for(int j = 1; j<=n;j++){
		printf("* ");
	}
	printf("\n");
}

	return 0;
}*/
//2. Hollow Square Star Pattern: Generate a hollow square of stars with stars only on the borders.
/*int main(){

int n;
printf("Enter the Row = ");
scanf("%d",&n);
for(int i = 1;i<=n;i++){
	for(int j = 1; j<=n;j++){
		if(i==1 || i==n){
		printf("* ");
	}if(i>1 && i<n){
		if(j==1 || j==n){
			printf("* ");
		}else{
			printf("  ");
		}
	}	
}
printf("\n");
}
	return 0;
}
*/
//3. Right Triangle Star Pattern: Print a right-angled triangle pattern using stars.

/*int main(){

int n;
printf("Enter the Row = ");
scanf("%d",&n);
for(int i = 1;i<=n;i++){
	for(int j = 1; j<=i;j++){
		printf("* ");
	}
	printf("\n");
}

	return 0;
}
*/
//4. Inverted Right Triangle Star Pattern: Generate an inverted right-angled triangle pattern using stars.
/*int main(){

int n;
printf("Enter the Row = ");
scanf("%d",&n);
for(int i = 1;i<=n;i++){
	for(int j = i; j<=n;j++){
		printf("* ");
	}
	printf("\n");
}

	return 0;
}*/
//5. Left Triangle Star Pattern: Print a left-justified triangle pattern of stars.
/*int main(){

int n;
printf("Enter the Row = ");
scanf("%d",&n);
for(int i = 1;i<=n;i++){
	
for(int j = 1; j<=n-i;j++){
printf("  ");
	}
for(int j = 1; j<=i;j++){
printf("* ");
	}	
	printf("\n");
	
}

	return 0;
}*/
//6. Number Pyramid: Create a pyramid pattern with numbers starting from 1.
/*
int main(){
int n,c=1;
printf("Enter the Row = ");
scanf("%d",&n);
for(int i = 1;i<=n;i++){	
for(int j = 1; j<=2*n-1;j++){
	if(j>=((n+1)-i)&&j<=(i+(n-1))){
	if(c<=1 || c>=9){
		printf("  %d",c);
		c++;
	}
	else if(c>9 || c<=99){
	
		printf("%2d ",c);
		c++;
	}		
	}else{
		printf("  ");
	}
	}	
	printf("\n");
	}
	return 0;
}*/
//7. Increasing Triangle Number Pattern: Print a triangle where each row contains the same number, increasing with each row.
/*int main(){

int n,k;
printf("Enter the Row = ");
scanf("%d",&n);
for(int i = 1;i<=n;i++){
	for(int j = 1; j<=i;j++){
		printf("%d ",i);
	}
	printf("\n");
}

	return 0;
}

*/


//8. Descending Number Triangle: Generate a triangle with descending numbers in each row.
/*int main(){
int n;
printf("Enter the Row = ");
scanf("%d",&n);
for(int i = 0;i<n;i++){
	for(int j = 0; j<i;j++){
		printf("%d ",n-i);
		
	}
	printf("\n");
}
	return 0;
}*/
//9. Alternating Star and Space Pattern: Create a pattern where stars alternate with spaces in a grid.
int main(){

int n;
printf("Enter the Row = ");
scanf("%d",&n);
for(int i = 1;i<=n;i++){
	for(int j = 1; j<=n;j++){
		if(i%2==0){
				printf("*  ");
		}else{
				printf("  *");
		}
	}
	printf("\n");
}

	return 0;
}
//10. Right Triangle Number Pattern: Print a right-angled triangle where each row starts from 1 and increases by 1.
/*int main(){

int n,k=1;
printf("Enter the Row = ");
scanf("%d",&n);
for(int i = 1;i<=n;i++){
	for(int j = 1; j<=i;j++){
		printf("  %d",k);
		k++;
	}
	printf("\n");
}

	return 0;
}*/
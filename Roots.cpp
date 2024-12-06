#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, discriminant, root1, root2;

 
    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

 
    if (a == 0) {
        printf("This is not a quadratic equation.\n");
        return 1;
    }

    discriminant = b * b - 4 * a * c;


    if (discriminant > 0) {
      
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("The roots are real and distinct:\n");
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    } else if (discriminant == 0) {
       
        root1 = -b / (2 * a);
        printf("The roots are real and equal:\n");
        printf("Root = %.2lf\n", root1);
    } else {
      
        printf("The equation has no real roots.\n");
    }

    return 0;
}

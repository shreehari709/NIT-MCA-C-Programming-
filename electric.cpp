#include <stdio.h>

int main() {
    char name[50];
    int units;
    float total = 0.0, surcharge = 0.0;

    printf("Enter the user's name: ");
    scanf("%s", name);
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);


    if (units <= 200) {
        total = units * 0.80;
    } else if (units <= 300) {
        total = (200 * 0.80) + ((units - 200) * 0.90);
    } else {
        total = (200 * 0.80) + (100 * 0.90) + ((units - 300) * 1.0);
    }


    total += 100;

 
    if (total > 400) {
        surcharge = total * 0.15;
        total += surcharge;
    }

   
    printf("\nElectricity Bill\n");
    printf("Name of the user: %s\n", name);
    printf("Units consumed: %d\n", units);
    printf("Total charge: Rs. %.2f\n", total);

    return 0;
}

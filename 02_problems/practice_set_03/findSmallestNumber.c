#include<stdio.h>

int main() {
    int num1, num2, num3, num4;
    int smallest;

    printf("Enter first number: \n");
    scanf("%d", &num1);
    printf("Enter second number: \n");
    scanf("%d", &num2);
    printf("Enter third number: \n");
    scanf("%d", &num3);
    printf("Enter fourth number: \n");
    scanf("%d", &num4);

    // Assume the first number is the smallest
    smallest = num1;

    // Compare with the second number
    if (num2 < smallest) {
        smallest = num2;
    }

    // Compare with the third number
    if (num3 < smallest) {
        smallest = num3;
    }

    // Compare with the fourth number
    if (num4 < smallest) {
        smallest = num4;
    }

    // Output the smallest number
    printf("%d is the smallest number among these four.\n", smallest);

    return 0;
}
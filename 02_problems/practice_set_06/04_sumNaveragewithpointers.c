#include<stdio.h>

int* sum(int a, int b) {
    int sum = a + b;
    int* ptr = &sum;
    printf("The sum of two numbers are: %d\n", sum);
    return ptr;
}
float* average(int a, int b) {
    float average = (a + b)/2.0;
    float* ptr = &average;
    printf("The average of two numbers are: %.2f\n", average);
    return ptr;
}

int main() {

    int num1, num2;

    printf("Enter the 1st number: \n");
    scanf("%d", &num1);
    printf("Enter the 2nd number: \n");
    scanf("%d", &num2);

    int* ptr1;
    float* ptr2;

    ptr1 = sum(num1, num2);
    ptr2 = average(num1, num2);

    printf("The addresses of sum and average of both numbers are %u and %u. \n", ptr1, ptr2);

    return 0;
}

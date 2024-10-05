#include<stdio.h>
#include<conio.h>

int main() {
    printf("We are going to find the area of rectangle here. \n");

    // For Example, let's do this
    int length, breadth, area;

    printf("Enter the Value of Length: \n");
    scanf("%d", &length);
    printf("Enter the Value of Breadth: \n");
    scanf("%d", &breadth);

    // In Order to find the Area of Rectangle here.
    area = length*breadth;

    printf("The value of the Area of Rectangle is: %d\n", area);
    return 0;
}
#include <stdio.h>
#include <math.h>

float area();
int factorial(int num2);
float average(float num1, float num2, float num3);
float convert(int celsius);
float force(int mass);
int fibonacci(int num);

int main()
{

    int choose;
    printf("Area of Square: 1\n");
    printf("Factorial: 2\n");
    printf("Average of 3 numbers: 3\n");
    printf("Celsius to Farheniet: 4\n");
    printf("Force of Attraction of any object: 5\n");
    printf("nth element of Fibonacci Series: 6\n");
    scanf("%d", &choose);

    if (choose == 1)
    {
        float result1 = area();
        printf("The area of square is %.2f sq.cm", result1);
    }
    else if (choose == 2)
    {
        int num;
        printf("Enter the number: \n");
        scanf("%d", &num);

        if (num < 0)
        {
            printf("Factorial is not defined for negative numbers.\n");
        }
        else
        {
            int result2 = factorial(num); // Pass the input number to factorial
            printf("The factorial of %d is %d\n", num, result2);
        }
    }
    else if (choose == 3)
    {
        float num1, num2, num3, result3;
        printf("Enter 1st Number: \n");
        scanf("%f", &num1);
        printf("Enter 2nd Number: \n");
        scanf("%f", &num2);
        printf("Enter 3rd Number: \n");
        scanf("%f", &num3);
        result3 = average(num1, num2, num3);

        printf("The average of %.2f, %.2f & %.2f is %.2f", num1, num2, num3, result3);
    }
    else if (choose == 4)
    {
        float celsius, result4;
        printf("We are going to convert Celsius to Fahrenheit here.\n");
        // To convert Celsius to Fahrenheit
        printf("Enter the value of Celsius here: \n");
        scanf("%f", &celsius);
        result4 = convert(celsius);

        printf("The Value from %.2f Degree to is Fahrenheit is %.2f F", celsius, result4);
    }
    else if (choose == 5)
    {
        float mass, result5;
        printf("Enter the mass of the object: \n");
        scanf("%f", &mass);
        result5 = force(mass);

        printf("The force of attraction Earth puts on this body with mass %.2f is %.2f", mass, result5);
    }    
    else if (choose == 6)
    {
        int num, result6;
        printf("Enter the number: \n");
        scanf("%d", &num);

        if (num < 0)
        {
            printf("Fibonacci series is not defined for negative numbers.\n");
        }
        else
        {
            result6 = fibonacci(num); // Pass the input number to factorial
            printf("The %dth Fibonacci Number is %d\n", num, result6);
        }
    }
    else
    {
        printf("Enter Valid Input.");
    }

    return 0;
}

float area()
{
    float areaOfSquare, num1;

    printf("Enter the length of the side: \n");
    scanf("%f", &num1);

    areaOfSquare = pow(num1, 2);

    return areaOfSquare;
}

int factorial(int num2)
{

    if (num2 == 0 || num2 == 1)
    {
        return 1; // a program to calculate factorial using recursion
    }
    else
    {
        return num2 * factorial(num2 - 1);
    }
}

float average(float num1, float num2, float num3)
{
    return (num1 + num2 + num3) / 3;
}

float convert(int celsius) 
{
    float fahrenheit;
    return fahrenheit = ((9.0/5.0) * celsius) + 32.0;
}

float force(int mass)
{
    float g = 9.8, weight; 
    return weight = mass * g;
}

int fibonacci(int num)
{
    if (num == 0)
    {
        return 0; // a program to calculate factorial using recursion
    }
    else if (num == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(num - 1) + fibonacci(num - 2);
    }
}
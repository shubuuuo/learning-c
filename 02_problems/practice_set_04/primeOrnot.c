#include <stdbool.h>
#include <math.h>

bool isPrime(int number) {
    // Handle small cases
    if (number <= 1) {
        return false; // Numbers less than or equal to 1 are not prime
    }
    if (number == 2 || number == 3) {
        return true;  // 2 and 3 are prime numbers
    }

    // Check divisibility by 2 or 3
    if (number % 2 == 0 || number % 3 == 0) {
        return false; // Exclude multiples of 2 and 3
    }

    // Check divisibility from 5 to sqrt(number)
    for (int i = 5; i <= sqrt(number); i += 6) {
        if (number % i == 0 || number % (i + 2) == 0) {
            return false; // Number is divisible by i or i+2
        }
    }

    return true; // Number is prime
}

int main() {
    int number;
    printf("Enter a number to check if it's prime: \n");
    scanf("%d", &number);

    if (isPrime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
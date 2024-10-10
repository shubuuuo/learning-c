#include<stdio.h>

int main() {

    int a = 2;
    int* ptr = &a;

    printf("The address is %u\n", &a);
    printf("The value of i is: %d\n", *ptr);

    int *b, *c, *d;

    printf("The address is %u, %u & %u\n", &b, &c, &d);
    printf("The value of i is: %d %d %d\n", *b, *c, *d);
    return 0;
}

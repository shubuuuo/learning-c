#include<stdio.h>

int main() {

    // int a = 11;

    int a;
    printf("Enter your age: \n");
    scanf("%d", &a);
    if (a > 18)
    {
        printf("ADULT!\n");
    } else
    {
        printf("CHILD.");
    }
    
    return 0;
}

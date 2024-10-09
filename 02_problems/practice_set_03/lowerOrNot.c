#include<stdio.h>

int main() {

    char charachter;

    printf("Enter a charachter: \n");
    scanf("%c", &charachter);

    // if (charachter >= 'a' && charachter <= 'z')
    // {
    //     printf("The charachter you entered is in lowercase.\n");
    // } else if (charachter >= 'A' && charachter <= 'Z')
    // {
    //     printf("The charachter you entered is in uppercase.\n");
    // } else    
    // {
    //     printf("Enter a valid charachter.\n");
    // }

    // This 97 & 122 are due to ASCII values of charachters, Every number, charachter or alphabet(lower or upper) has an ASCII value.

    if (charachter >= 97 && charachter <= 122)
    {
        printf("The charachter you entered is in lowercase: %c = %d\n", charachter, charachter);
    } else
    {
        printf("The charachter you entered is not in lowercase: %c = %d\n", charachter, charachter);
    }
    
    
    
    return 0;
}
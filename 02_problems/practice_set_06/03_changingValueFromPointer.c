#include<stdio.h>

void change_to_ten_times(int* a);


int main() {

    int value;
    printf("Enter the value you want to multiply to 10: \n");
    scanf("%d", &value);

    printf("The value you entered is: %d\n", value);
    change_to_ten_times(&value);
    printf("The multiplication of 10 to the value you entered is: %d\n", value);
    return 0;
}

void change_to_ten_times(int* a) {
    *a = *a * 10;
}
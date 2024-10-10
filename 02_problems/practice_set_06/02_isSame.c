#include<stdio.h>

int returning_5(int* ptr);

int main() {

    int i = 2;
    int* ptr = &i;

    printf("The address of %d is %u\n", i, &i);   
    returning_5(ptr);  
    return 0;
}

int returning_5(int* ptr){
    printf("The value of ptr is %d\n", ptr); 
    printf("The value at ptr is %d\n", *ptr); 
    return 5;
}
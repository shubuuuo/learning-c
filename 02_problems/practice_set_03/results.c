#include <stdio.h>

#define MATHS 33
#define ENGLISH 33
#define SCIENCE 33
#define TOTAL_MARKS 40
#define NUM_STUDENTS 3

struct student {
    int roll_no;
    float maths_marks;
    float english_marks;
    float science_marks;
    float total_marks;
};

int main() {
    struct student students[NUM_STUDENTS];
    int i = 0;

    printf("Results have been Declared! All the students can come & check their results.\n");

    while (i < NUM_STUDENTS) {
        students[i].roll_no = i + 1;
        printf("Enter marks of maths for student %d: \n", students[i].roll_no);
        if (scanf("%f", &students[i].maths_marks) != 1) {
            printf("Invalid input for maths marks.\n");
            return 1; // Exit if input is invalid
        }
        printf("Enter marks of english for student %d: \n", students[i].roll_no);
        if (scanf("%f", &students[i].english_marks) != 1) {
            printf("Invalid input for english marks.\n");
            return 1; // Exit if input is invalid
        }
        printf("Enter marks of science for student %d: \n", students[i].roll_no);
        if (scanf("%f", &students[i].science_marks) != 1) {
            printf("Invalid input for science marks.\n");
            return 1; // Exit if input is invalid
        }
        
        students[i].total_marks = ((students[i].maths_marks + students[i].english_marks + students[i].science_marks) / 300) * 100;
        i++;
    }
    
    i = 0;

    printf("\n=========================================================================\n");
    printf("| Roll No |  Maths  |  English  |  Science  |  Result       |\n");
    printf("=========================================================================\n");

    while (i < NUM_STUDENTS) {
        printf("|   %-6d|   %-6.2f|   %-6.2f|   %-6.2f|  %-12s|\n", 
            students[i].roll_no, 
            students[i].maths_marks,   
            students[i].english_marks, 
            students[i].science_marks, 
            (students[i].maths_marks >= MATHS && students[i].english_marks >= ENGLISH && students[i].science_marks >= SCIENCE) ? "Passed" : "Failed");
        i++;
    }

    printf("=========================================================================\n");

    return 0;
}
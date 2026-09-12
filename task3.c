#include <stdio.h>

int main() {
    int marks = 75;

    if (marks >= 80) {
        printf("Grade: A\n");
    } else if (marks >= 70 && marks <= 79) {
        printf("Grade: B\n");
    } else if (marks >= 60 && marks <= 69) {
        printf("Grade: C\n");
    } else if (marks >= 50 && marks <= 59) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F\n");
    }

    return 0;
}

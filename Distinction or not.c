#include<stdio.h>

int main() {
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    if(marks > 75) {
        printf("Distinction");
    }
    else if(marks >= 40 && marks <= 75) {
        printf("Pass");
    }
    else {
        printf("Fail");
    }

    return 0;
}

#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num >= 10 && num <= 100) {
        printf("%d is within the range 10 to 100.", num);
    } else {
        printf("%d is NOT within the range 10 to 100.", num);
    }

    return 0;
}

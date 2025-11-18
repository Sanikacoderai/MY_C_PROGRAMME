#include <stdio.h>

int main() {
    int a=20,b=15,c=25;
   if (a > b) {
        if (a > c)
            printf("A is largest");
        else
            printf("C is largest");
    } else {
        if (b > c)
            printf("B is largest");
        else
            printf("C is largest");
    
}
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
int main() {
    int *p;
    p = (int*) malloc(sizeof(int)); 
    if(p == NULL) {
        printf("Memory not allocated\n");
        return 0;
    }
    *p = 10;
    printf("Value = %d\n", *p);
    free(p);
}

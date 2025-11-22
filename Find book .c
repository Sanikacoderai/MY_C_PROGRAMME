#include <stdio.h>
int main() {
    int a[5] = {2, 5, 8, 12, 20};
    int n, mid, low = 0, high = 4;
    printf("Enter Book ID: ");
    scanf("%d", &n);
    while (low <= high) {
        mid = (low + high) / 2;
        if (a[mid] == n) {
            printf("Book found");
            return 0;
        }
        else if (n < a[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    printf("Book not found");
    return 0;
}

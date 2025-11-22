#include <stdio.h>
struct Book {
    char title[50];
    char author[50];
    int year;
};
int main() {
    struct Book b1, b2;
    printf("Enter details of Book 1:\n");
    printf("Title: ");
    scanf(" %s[\n]", b1.title);
    printf("Author: ");
    scanf(" %s[\n]", b1.author);
    printf("Year: ");
    scanf("%d", &b1.year);
    printf("\nEnter details of Book 2:\n");
    printf("Title: ");
    scanf(" %s[\n]", b2.title);
    printf("Author: ");
    scanf(" %s[\n]", b2.author);
    printf("Year: ");
    scanf("%d", &b2.year);
    printf("\n--- List of Books ---\n");
    printf("\nBook 1:\nTitle: %s\nAuthor: %s\nYear: %d\n", b1.title, b1.author, b1.year);
    printf("\nBook 2:\nTitle: %s\nAuthor: %s\nYear: %d\n", b2.title, b2.author, b2.year);

    return 0;
}

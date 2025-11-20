#include<stdio.h>
#include<string.h>
int main(){
    char wish[20];
    printf("enter your string\n");
    printf("%s",wish);
    scanf("%s",wish);
    strcat(wish,"good");
    printf("%s",wish);
}

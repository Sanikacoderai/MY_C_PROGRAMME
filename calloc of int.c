#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p=(int*)calloc(5,sizeof(int));
    printf("%d\n",*p);
    *p=10;
    printf("%d\n",*p);
}

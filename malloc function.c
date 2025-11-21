#include<stdio.h>
#include<stdlib.h>
int main(){
    int*p=(int*)malloc(5*sizeof(int));
    *p=10;
    printf("%d\n",*p);
}

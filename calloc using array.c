#include<stdio.h>
#include<stdlib.h>
int main(){
    int *sam=(int*)calloc(5,sizeof(int));
    for(int i=0;i<5;i++){
    printf("enter elements");
    scanf("%d",&sam[i]);
}
    for(int i=0;i<5;i++){
        printf("%d\n",sam[i]);
    }
}

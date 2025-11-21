#include<stdio.h>
int main(){
    int arr[100],n,*start,*end,temp;
    printf("enter the elements: %d",n);
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    start=arr;
    end=arr+n-1;
    while(start<end){
    temp=*start;
    *start=*end;
    *end=temp;
    start++;
    end--;
    }
    printf("reversed array");
    for(int i=0;i<5;i++){
    printf("%d",arr[i]);
    }
}

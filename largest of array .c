#include<stdio.h>
int main()
{
    int arr[5]={12,34,67,98,45};
    int max=arr[0];
    for(int i=1;i<5;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("largest number is:%d",max);
}

#include<stdio.h>
int main(){
    int door[5];
    int sum=0;
    for(int i=0;i<5;i++){
        printf("enter the hight of the door");
        scanf("%d",&door[i]);
        sum=sum+door[i];
    }
    printf("hight of the door is:%d",sum);
}

#include<stdio.h>
void preview(int a,int b){
int t=a;
a=b;
b=t;
printf("preview swapping %d%d",a,b);}
void realswap(int *a,int *b){
   int t=*a;
    *a=*b;
    *b=t;
    printf("real swaping %d%d",*a,*b);
}
int main(){
    int x,y;
    printf("enter the values of x and y");
    scanf("%d%d",&x,&y);
    preview(x,y);
    realswap(&x,&y);
    printf("after real swap %d%d",x,y);
}

#include<stdio.h>
int main(){
    int u1,u2,p1,p2,total;
    printf("enter the units of product1 and product2");
    scanf("%d%d",&u1,&u2);
    printf("enter the price of the product1 and product2");
    scanf("%d%d",&p1,&p2);
   int revenue=(u1*p1)+(u2*p2);
    printf("%d",revenue);
}

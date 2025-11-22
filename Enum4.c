#include<stdio.h>
enum operation {
    add=1,
    sub,
    prod,
    div,
};
int main(){
    enum operation op;
    printf("enter the code 1 to 4");
    scanf("%d",&op);
    if(op==add){
        printf("you choose addition");
    }
    else if(op==sub){
        printf("you choose subtraction ");
    }
    else if(op==prod){
        printf("you choose multiplication ");
    }
    else if(op==div){
        printf("you choose division");
    }
    else{
        printf("the code is not found");
    }
}

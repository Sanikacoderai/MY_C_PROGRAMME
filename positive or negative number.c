#include<stdio.h>
int main()
{
    int num;
    printf("enter a number");
    scanf("%d",&num);
    if(num>0) {
        printf("%d is the positive number\n",num);
    }
    else if(num<0){
        printf("%d is negetive number\n",num);
    }
  else{
      printf("the number is zero\n ");
  }
  return 0;
}

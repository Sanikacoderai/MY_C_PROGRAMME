#include<stdio.h>  
int main()
{
float num1,num2;
printf("enter two numbers");
scanf("%f%f",&num1,&num2);
float sum=num1+num2;
float difference=num1-num2;
float product=num1*num2;
float quoetient;
if(num2 !=0){
    quoetient=num1/num2;
    printf("\nquoetient=%.2f",quoetient);
}else{
    printf("\n cannot divide by zero!");
}
printf("\nsum=%.2f",sum);
printf("\ndifference=%.2f",difference);
printf("\nproduct=%.2f",product);
return 0;
}


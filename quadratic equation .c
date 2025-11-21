#include<stdio.h>
#include<math.h>
int main()
{ float a,b,c,d;
printf("enter the value of a,b and c\n");
scanf("%f %f %f",&a,&b,&c);
d=(b*b)-(4*a*c);
if(d>0){
    printf("roots are real and distinct\n");
}
else if(d==0){
    printf("roots are real");
}
else{
    printf("roots are imaginary");
}

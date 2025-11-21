#include<stdio.h>
int main(){
     int pass(int a,int b,int c){
     if(a>=40&&b>40&&c>40)
    return 1;    
    else
        return 0;
     }
     int m1,m2,m3;
     float avg;
     printf("enter the marks of each subject\n");
     scanf("%d %d %d",&m1,&m2,&m3);
     avg=(m1+m2+m3)/3;
     printf("avarge=%.f\n",avg);
     if(pass(m1,m2,m3)){
         printf("passed");}
         else{
         printf("fail");
     }
}

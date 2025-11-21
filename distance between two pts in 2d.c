#include<stdio.h>
#include<math.h>
int main(){
    float x1,x2,y1,y2,distance;
    printf("enter the value of x1,x2,y1,y2\n");
    scanf("%f%f%f%f",&x1,&x2,&y1,&y2);
    distance=sqrt(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
    printf("the distance between the two points on 2D is :%.2f ",distance);
}

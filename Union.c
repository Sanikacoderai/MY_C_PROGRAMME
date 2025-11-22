#include<stdio.h>
int main(){
    union data{
        int pen;
        float gold;
    };
    union data d;
    d.pen=100;
    printf("%d\n",d.pen);
    d.gold=20;
    printf("%f",d.gold);
}

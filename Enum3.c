#include<stdio.h>
enum level{
    high=100,
    medium=50,
    low=00,
};
int main(){
    enum level l=high;
    printf("%d",l);
}

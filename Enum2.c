#include<stdio.h>
enum week{
    sunday=12,
    monday,
    tuesday=50,
    friday,
};
int main(){
    enum week w=monday;
    printf("%d",w);
}

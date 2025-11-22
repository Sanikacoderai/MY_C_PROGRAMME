#include<stdio.h>
enum week{
    sunday,
    monday,
    Tuesday,
    Wednesday,
    Thursday,
    friday,
    Saturday,
};
int main(){
    enum week w;
    w=sunday;
    printf("%d",w);
}

#include<stdio.h>
int main(){
    int id;
    int ADHAR=1000;
        int PAN =2000;
        int APAAR  =3000;
        int PASSPORT=4000;
        int DRIVINGLICESENCE=5000;
        printf("enter your id number\n");
        scanf("%d",&id);
        switch(id){
            case 1000:
            printf("ADHAR NUMBER VERIFIED\n");
            break;
            case 2000:
            printf("PAN NUMBER VERIFIED\n");
            break;
            case 3000:
            printf("APAAR ID VERIFIED\n");
            break;
            case 4000:
            printf("PASSPORT VERIFIED\n");
            break;
            case 5000:
            printf("DRIVING LICENCE VERIFIED");
            break;
            default:
            printf("THE ID NUMBER NOT FOUND");
        }
        
}

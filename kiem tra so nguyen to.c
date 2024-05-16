#include<stdio.h>

void nhapso(int *n){
    do{
    printf("nhap so nguyen lon hon 0 : ");
    scanf("%d",n);
    }while(n<0);
}

int nguyento(int a){
    if(a%(a-1)==0){
        return printf("\nday khong phai la so nguyen to");
    }else{
        return printf("\nday la so nguyen to");
    }
}

int main(){
    int n;
    nhapso(&n);
    nguyento(n);
    return 0;
}
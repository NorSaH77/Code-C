#include<stdio.h>

void nhapso(int *n){
    do{
    printf("nhap so nguyen lon hon 0 : ");
    scanf("%d",n);
    }while(n<0);
}

int nguyento(int a){
    int s=0,i;
    for(i=2;i<a;i++){
        if(a%i==0)
        s++;
    }
    if(s==0){
    printf("\nday la so nguyen to");
    }else{
    printf("\nday khong phai la so nguyen to");
    }
}

int main(){
    int n;
    nhapso(&n);
    nguyento(n);
    return 0;
}

#include<stdio.h>


void nhap(int *n){
    do{
        printf("nhap so nguyen n: ");
        scanf("%d",n);
    }while(*n<1);
}


void le(int n){
    int i,t=1;
    for(i=1;i<=n;i+=2){
        t*=i;
    }
    printf("tich cac so le la: %d",t);
}


void chan(int n){
    int i,t=1;
    for(i=2;i<=n;i+=2){
        t*=i;
    }
    printf("tich cac so chan la: %d",t);
}


int main(){
    int n;
    nhap(&n);
    if(n%2==0)
    chan(n);
    else
    le(n);
    return 0;
}

#include<stdio.h>


void nhap(int *n) {
    printf("nhap so nguyen n:");
    scanf("%d",n);
}


void le(int n) {
    int i,t=1;
    for(i=1; i<=n*2; i+=2){
        t*=i;
    }
    printf("1*3*5*...*n= %d",t);
}


void chan(int n) {
    int i,t=2;
    for(i=2; i<=n*2; i+=2){
        t*=i;
    }
    printf("2*4*6*...*n= %d",t);
}


void tinh(int n) {
    if(n%2==0)
        chan(n);
    else
        le(n);
}


int main() {
    int n;
    nhap(&n);
    tinh(n);
    return 0;
}
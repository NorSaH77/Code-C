#include<stdio.h>


void nhap(int *n){
    printf("nhap n phan tu: ");
    scanf("%d",n);
}


void check(int n){
    int i;
    int a[1000];
    a[0]=0;
    a[1]=1;
    for(i=2;i<=n;i++){
        a[i]=a[i-1]+a[i-2];
    }
    printf("so fibonacci thu n la: %d",a[n]);
}


int main(){
    int n;
    nhap(&n);
    check(n);
    return 0;
}
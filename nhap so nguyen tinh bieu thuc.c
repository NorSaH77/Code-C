#include<stdio.h>

void nhapso(int *n, int *x){
    do{
        printf("nhap n>1,x : ");
        scanf("%d%d",n,x);
    }
    while(*n<=1);
}

float bieuthuc(int n,int x){
    int i;
    float T=10;
    for(i=2;i<=n;i++){
        T+=(float)i/x;
    }
    printf("gia tri cua bieu thuc T la : %.2f",T);
}

int main(){
    int n,x;
    nhapso(&n,&x);
    bieuthuc(n,x);
    return 0;
}
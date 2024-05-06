#include<stdio.h>

int main(){
    int x,n,i;
    float A;
    A = 0;
    printf("nhap so nguyen x : ");
    scanf("%d",&x);
    printf("\nnhap so nguyen n : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    A+=(float)x/(i+1);
    }
    printf("\nBieu thuc A = %.2f",100+A);
    return 0;
}
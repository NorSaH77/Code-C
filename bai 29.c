#include<stdio.h>
#include<math.h>

int main(){
    int x,n,i;
    float A;
    A = 0;
    printf("nhap so nguyen x : ");
    scanf("%d",&x);
    printf("\nnhap so nguyen n : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        A+=(float)pow((-1),(i+1))*x/(10*i);
    }
    printf("\nBieu thuc A = %.2f",100+A);
    return 0;
}

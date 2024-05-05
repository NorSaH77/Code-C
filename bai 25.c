#include<stdio.h>
#include<math.h>

int main(){
    float x,n,i,A;
    A = 0;
    printf("nhap x : ");
    scanf("%f",&x);
    printf("\nnhap n : ");
    scanf("%f",&n);
    for(i=1;i<=n;i++){
        A+=(float)100+pow((-1),(i+1))*x/(10*i);
    }
    printf("\nBieu thuc A = %.2f",A);
    return 0;
}
#include<stdio.h>
#include<math.h>

int main(){
    int n,x,i;
    float Q=10;
    printf("nhap so nguyen x : ");
    scanf("%d",&x);
    do{
    printf("\nnhap so nguyen n : ");
    scanf("%d",&n);
    } while(n<1);
    for(i=1;i<=n;i++){
        Q+=(float)exp(i*x);
    }
    printf("\ngia tri bieu thuc Q la : %.2f",Q);
    return 0;
}
#include<stdio.h>
#include<math.h>

int main(){
    int n,i,A;
    A = 0;
    printf("\nnhap so nguyen n : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        A+=(pow((-1),i)*(10*(i+1)));
    }
    printf("\nBieu thuc A = %d",100+A);
    return 0;
}
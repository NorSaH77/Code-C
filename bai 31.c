#include<stdio.h>
#include<math.h>

int main(){
    int n,i;
    float T;
    printf("nhap n : ");
    scanf("%d",&n);
    if(n<1){
    printf("\nso ban vua nhap khong hop le , hay nhap lai so >=1 : ");
    scanf("%d",&n);
    }
    for(i=1;i<=n;i++){
        T+=(float)sqrt(i);
    }
    printf("\nTong bieu thuc T la : %.2f",T);
    return 0;
}
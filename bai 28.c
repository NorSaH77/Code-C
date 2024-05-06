#include<stdio.h>

int main(){
    int n,i;
    int S=0;
    printf("nhap so nguyen duong n : ");
    scanf("%d",&n);
    if(n<1){
    printf("\nso ban vua nhap khong hop le , hay nhap lai so >=1 : ");
    scanf("%d",&n);
    }
    for(i=0;i<=n;i++){
        S+=2*i+1;
    }
    printf("\nTong cac so le S=1+3+5+...+2*n+1 la : %d",S);
    return 0;
}
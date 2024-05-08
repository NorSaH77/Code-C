#include<stdio.h>

int main(){
    int a,b,i,j;
    printf("Nhap a : ");
    scanf("%d",&a);
    printf("\nNhap b : ");
    scanf("%d",&b);
    for(i=1;i<=a;i++){
        if(a%i==0 && b%i==0)j=i;
    }
    printf("\nUoc chung lon nhat cua a va b la : %d",j);
    return 0;
}
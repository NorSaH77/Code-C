#include<stdio.h>

int main() {
    int a,b;
    printf("nhap he so a = ");
    scanf("%d",&a);
    printf("\nnhap he so b = ");
    scanf("%d",&b);
    printf("\nphuong trinh sau khi nhap la : %d*x+%d=0",a,b);
    if(a!=0) {
        printf("\nphuong trinh co nghiem duy nhat x=-%d/%d",b,a);
    } else if(b!=0) {
        printf("\nphuong trinh vo nghiem");
    } else {
        printf("\nnghiem dung voi moi x");
    }
    return 0;
}
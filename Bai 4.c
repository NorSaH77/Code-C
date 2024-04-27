#include<stdio.h>

int main(){
    int a,b;
    float Thuong;
    printf(" nhap so thu nhat : ");
    scanf("%d", &a);
    printf("\n nhap so thu hai : ");
    scanf("%d",&b);
    printf("\n Tong 2 so la : %d", a+b );
    printf("\n Hieu 2 so la : %d", a-b );
    printf("\n Tich 2 so la : %d", a*b );
    if ( b != 0 ){
        Thuong = (float) a/b ;
        printf("\n Thuong 2 so la : %.2f", Thuong );
    }else{
        printf("\n Phep tinh khong xac dinh ");
    }
    return 0;

}
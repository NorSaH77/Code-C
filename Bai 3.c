#include<stdio.h>

int main(){
    int a,b,c;
    printf(" nhap so thu nhat : ");
    scanf("%d", &a );
    printf("\n nhap so thu hai : ");
    scanf("%d", &b);
    printf("\n nhap so thu ba : ");
    scanf("%d", &c);
    ( a+b>c && a+c>b && b+c>a ) ? printf("\n Day la 3 canh tam giac ") : printf("\n day khong la 3 canh tam giac");
    return 0;

}
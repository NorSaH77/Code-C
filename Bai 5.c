#include<stdio.h>

int main(){
    int a ;
    printf(" Nhap so bat ki : ");
    scanf("%d", &a);
    ( a % 2 == 0) ? printf("\n Day la so chan ") : printf("\n Day la so le ");
    return 0;
}
#include<stdio.h>

int main(){
    float a,b;
    printf(" nhap a = ");
    scanf("%f", &a);
    printf("\n nhap b = ");
    scanf("%f", &b);
    printf("\n %5s + %5s = %8s", "a","b","a+b");
    printf("\n %5.2f + %5.2f = %8.2f",a,b,a+b);
    return 0;

}
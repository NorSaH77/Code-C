#include<stdio.h>

void nhapso(int *a, int *b){
    printf("nhap so a,b : ");
    scanf("%d%d",a,b);
}

unsigned long giaithua(int n){
    if(n==0 || n==1){
        return 1;
    }else{
        return n*giaithua(n-1);
    }
}

int main(){
    int a,b;
    nhapso(&a,&b);
    printf("\ngiai thua a! = %d",giaithua(a));
    printf("\ngiai thua b! = %d",giaithua(b));
    printf("\ntong 2 giai thua a! va b! la : %d",giaithua(a)+giaithua(b));
    return 0;
}
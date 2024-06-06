#include<stdio.h>
#include<math.h>

void nhap(int *k){
    printf("nhap so nguyen k: ");
    scanf("%d",k);
}

void tinh(int k){
    int i;
    float t=99;
    for(i=1;i<=k;i++){
        t+=pow(-1,i)*1/(10*i);
    }
    printf("T = %.2f",t);
}

int main(){
    int k;
    nhap(&k);
    tinh(k);
    return 0;
}
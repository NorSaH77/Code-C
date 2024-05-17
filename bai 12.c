#include<stdio.h>

void nhapso(int *n){
    printf("nhap so < 100 : ");
    scanf("%d",n);
}

int check(int a){
    int s=0,i;
    for(i=1;i<a;i++){
        if(a%i==0)
        s+=i;
    }
    if(s==a)
    printf("\nday la so hoan hao");
    else
    printf("\nday khong phai so hoan hao");
}

int main(){
    int n;
    nhapso(&n);
    check(n);
    return 0;
}
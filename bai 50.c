#include<stdio.h>


void nhap(int *n){
    printf("nhap n so nguyen: ");
    scanf("%d",n);
}


void tinh(int n){
    int i,a[50],d=0;
    float c=0,b=0;
    for(i=0;i<n;i++){
        printf("nhap so nguyen thu %d: ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]>0){
            b+=a[i];
            c++;
        }
        if(a[i]%2!=0)
        d++;
    }
    printf("trung binh cong cac so khong am la: %.2f",b/c);
    printf("trong mang co %d so le",d);
}


int main(){
    int n;
    nhap(&n);
    tinh(n);
    return 0;
}
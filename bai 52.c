#include<stdio.h>

void nhap(int *n, int *m){
    printf("nhap dong, cot: ");
    scanf("%d%d",n,m);
}

void tinh(int n, int m){
    int i,j,t=0,s=0;
    int a[50][50],b[50],c[50];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("nhap dong %d, cot %d: \n",i,j);
            scanf("%d",&a[i][j]);
            if(i==j){
                t+=a[i][j];
                b[i]=a[i][j];
            }
        }
    }
    printf("cac phan tu tren duong cheo chinh la:");
    for(i=0;i<n;i++){
        printf("%3d",b[i]);
    }   
    printf("\ntong cac phan tu tren duong cheo chinh la: %d\n",t);
    printf("cac phan tu tren duong cheo phu la:");
    for(i=0;i<n;i++){
        printf("%3d",a[i][n-1-i]);
        s+=a[i][m-1-i];
    }
    printf("\ntong cac phan tu tren duong cheo phu la: %d",s);
}


int main(){
    int n,m;
    nhap(&n,&m);
    tinh(n,m);
    return 0;
}
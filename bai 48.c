#include<stdio.h>

void nhap(int *n){
    printf("nhap so phan tu: ");
    scanf("%d",n);
}

void check(int n){
    int i,a[50],tg,j;
    float t=0,b=0,s=0,c=0;
    for(i=0;i<n;i++){
        printf("\nnhap phan tu thu %d: ",i);
        scanf("%d",&a[i]);
        if(a[i]%2==0){
            t+=a[i];
            b++;
        }
        else{
            s+=a[i];
            c++;
        }
    }
    printf("trung binh cong cac so chan la: %.2f\n",t/b);
    printf("trung binh cong cac so le la: %.2f\n",s/c);
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                tg=a[i];
                a[i]=a[j];
                a[j]=tg;
            }
        }
    }
    printf("mang theo thu tu tang dan la:");
     for(i=0;i<n;i++){
        printf("%3d",a[i])
     }
}

int main(){
    int n;
    nhap(&n);
    check(n);
    return 0;
}


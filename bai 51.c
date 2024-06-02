#include<stdio.h>

int main(){
    int m,n,i,j,t=0,dem=0,s=0,tbc=0,a[20][20],max=a[0][0];
    printf("nhap so dong, so cot : ");
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("nhap phan tu dong %d, cot %d : ",i,j);
            scanf("%d",&a[i][j]);
            if(a[i][j]%10==6)
            t+=a[i][j];
            if(a[0][0]<a[i][j])
            max=a[i][j];
            if(a[i][j]%3==0 && a[i][j]%2==0)
            dem++;
            s+=a[2][j];
            tbc+=(float)a[i][2];
        }
    }
    printf("tong cac chu so co so tan cung = 6 la : %d\n",t);
    printf("phan tu lon nhat trong mang la : %d\n",max);
    printf("so phan tu chan chia het cho 3 la : %d\n",dem);
    printf("tong cac phan tu o hang 2 la : %d\n",s);
    printf("trung binh cong cac phan tu cot 2 la : %.2f\n",tbc/2);
    return 0;  
}

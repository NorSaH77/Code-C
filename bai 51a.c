#include <stdio.h>

int main() {
    int n,m,i,j,a[100][100],T=0;
    int min=a[0][0];
    printf("nhap so hang , so cot :  \n");
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
         printf("nhap phan tu hang %d cot %d: ",i,j);
         scanf("%d",&a[i][j]);
         if(a[i][j]%10==6)
         T+=a[i][j];
         if(a[0][0]<a[i][j])
         min=a[i][j];
        }
    }
    printf("tong cac phan tu co so tan cung =6 la : %d\n",T);
    printf("phan tu lon nhat trong mang la : %d",min);
    return 0;
}
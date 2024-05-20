#include<stdio.h>
#include<conio.h>

int main(){ 
    int a[50][50];
    int i,j,m,n;
    printf("nhap ѕo hanɡ , so cot : "); 
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("\nnhap phan tu hang %d , cot %d : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++)
            printf("%3d",a[i][j]);
            printf("\n");
    }
    return 0;
}
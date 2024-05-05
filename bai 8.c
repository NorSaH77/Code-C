#include<stdio.h>

int main(){
  int n,i,T;
  T=0;
  printf("nhap so nguyen n : ");
  scanf("%d",&n);
  if(n<1){
    printf("\nso ban vua nhap khong hop le , hay nhap lai so >=1 : ");
    scanf("%d",&n);
  }
  for(i=1;i<=n;i++){
    T+=i*(i+1);
    printf("\nTong cua T = 1*2+2*3+...+n*(n+1) la : %d",T);
  }
  return 0;
}
#include<stdio.h>

void nhapso(int *a, int *b){
  printf("nhap a,b : ");
  scanf("%d%d",a,b);
}

void thayso(int a, int b){
  int tg;
  tg=a;
  a=b;
  b=tg;
  printf("\ngia tri cua a va b khi thay doi la : a=%d , b=%d",a,b);
}

int main(){
  int a,b;
  nhapso(&a,&b);
  thayso(a,b);
  return 0;
}
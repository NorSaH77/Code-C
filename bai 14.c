#include<stdio.h>
#include<math.h>

void nhap(int *a,int *b,int *c){
    printf("nhap 3 so a,b,c: ");
    scanf("%d%d%d",a,b,c);
}


void check(int a,int b,int c){
    if(a==b && b==c && c==a)
    printf("day la tam giac deu.");
    else if(a==b || b==c || c==a)
    printf("day la tam giac can.");
    else if(pow(a,2)==pow(b,2)+pow(c,2) || pow(b,2)==pow(a,2)+pow(c,2) || pow(c,2)==pow(a,2)+pow(b,2))
    printf("day la tam giac vuong.");
    else if(a!=b!=c || b!=a!=c || c!=a!=b)
    printf("day la tam giac thuong");
    else
    printf("day la tam giac tu.");
}


int main(){
    int a,b,c;
    nhap(&a,&b,&c);
    check(a,b,c);
    return 0;
}
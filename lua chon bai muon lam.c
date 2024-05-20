#include<stdio.h>
#include<conio.h>

void bai1(){
    int a,i,S=0;
    printf("nhap so < 100 : ");
    scanf("%d",&a);
    for(i=1;i<a;i++){
        if(a%i==0)
        S+=i;
    }
    if(S==a)
    printf("day la so hoan hao");
    else
    printf("day khong phai so hoan hao");
}

void bai2(){
    int b,j,T=0;
    do{
    printf("nhap so nguyen lon hon 0 : ");
    scanf("%d",&b);
    }while(b<0);
    for(j=2;j<b;j++){
        if(b%j==0)
        T++;
    }
    if(T==0)
    printf("day la so nguyen to");
    else
    printf("day khong phai la so nguyen to");
}

void bai3(){
    int c,d,z;
    float A=10;
    do{
        printf("nhap n>1,x : ");
        scanf("%d%d",&c,&d);
    }
    while(c<=1);
    for(z=2;z<=c;z++){
        A+=(float)z/d;
    }
    printf("gia tri cua bieu thuc T la : %.2f",A);
}

void bai4(){
    int a=50000,b=20000,c=10000,x,y,z;
    for(x=0;x<=4;x++){
        for(y=0;y<=10;y++)
        for(z=0;z<=20;z++)
        if(a*x+b*y+c*z==200000)
        printf("\ncan %d to %dvnd, %d to %dvnd, %d to %dvnd de co so tien 200000vnd",x,a,y,b,z,c);
    }
}

int main(){
    int n;
    printf("Chon bai muon lam :\n");
    printf("1.Nhap vao so n<100.Kiem tra xem n co phai so hoan hao hay khong.\n");
    printf("2.Nhap so nguyen n.Kiem tra xem n co phai so nguyen to khong.\n");
    printf("3.Nhap 2 so nguyen n,x.Tinh bieu thuc T=10+2/x+3/x+...+n/x.\n");
    printf("4.Tim cac kha nang de co to 200k can bao nhieu to 10k,20k,50k.\n");
    do{
    printf("Nhap so bai muon lam : ");
    scanf("%d",&n);
    if(n>=5)
    printf("Vui long nhap lai!\n");
    }while(n>=5);
    switch (n){
        case 1:
        bai1();
        break;
        case 2:
        bai2();
        break;
        case 3:
        bai3();
        break;
        case 4:
        bai4();
        break;
    }
    return getch();
}

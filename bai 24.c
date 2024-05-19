#include<stdio.h>

int main(){
    int a=50000,b=20000,c=10000,x,y,z;
    for(x=0;x<=4;x++){
        for(y=0;y<=10;y++)
        for(z=0;z<=20;z++)
        if(a*x+b*y+c*z==200000)
        printf("\ncan %d to %dvnd, %d to %dvnd, %d to %dvnd de co so tien 200000vnd",x,a,y,b,z,c);
    }
    return 0;
}
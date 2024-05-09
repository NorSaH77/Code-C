#include<stdio.h>

int main(){
    int a,b,c,s;
    for(a=1;a<9;a++){
        for(b=0;b<9;b++)
        for(c=0;c<9;c++)
        if(a+b+c==9){
            printf("\ncac so co 3 chu so co tong bang 9 la : %d%d%d",a,b,c);
        }
    }
    return 0;
}
#include<stdio.h>


void check(){
    int i,j,k;
    for(i=1;i<=20;i++){
        for(j=1;j<=100;j++){
            for(k=1;k<=100;k++){
                if(15*i+9*j+k==300 && i+j+k==100)
                printf("co %d trau dung, %d trau nam, %d trau gia\n",i,j,k);
            }
        }
    }
}


int main(){
    check();
    return 0;
}
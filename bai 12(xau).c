#include<stdio.h>
#include<ctype.h>


void check(char s[100]){
    int a=0,b=0,c=0,i;
    for(i=0;i<strlen(s)-1;i++){
        if(isdigit(s[i])){
            a++;
        }
        else if(isalpha(s[i])){
            b++;
        }
        else{
            c++;
        }
    }
    printf("xau co %d chu so, %d chu cai, %d ki tu khac.",a,b,c);
}


int main(){
    char s[100];
    printf("nhap xau ki tu: ");
    fgets(s,100,stdin);
    check(s);
    return 0;
}
#include<stdio.h>

int main() {
    int so_hang;
    int i,j;
    printf(" Nhap so hang cua tam giac : ");
    scanf("%d", &so_hang);

    for ( i = 1 ; i <= so_hang ; i++) {
        for ( j =1 ; j <= so_hang - i ; j++) {
            printf(" ");
        } 
        for ( j = 1 ; j <= 2 * i - 1 ; j++) {
            printf("*");
        } printf("\n");
    }
    return 0;
}

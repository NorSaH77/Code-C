#include<stdio.h>

int main() {
    int mang[] = { 25,21, 77, 12,15,16,22 };
    int do_dai = sizeof ( mang ) / sizeof ( mang[0] );
    int nho_nhat = mang[0];
    for ( int i = 0 ; i < do_dai ; i++ ) {
        if ( mang[i] < nho_nhat ) {
            nho_nhat = mang[i];
        }
    }
    printf(" %d ", nho_nhat );
    return 0;
}
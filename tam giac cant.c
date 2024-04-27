#include <stdio.h>

int main() {
    int hang, i, j;
    printf("Nhập số hàng của tam giác: ");
    scanf("%d", &hang);

    for (i = 1; i <= hang; i++) {
        for (j = 1; j <= hang - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
    }
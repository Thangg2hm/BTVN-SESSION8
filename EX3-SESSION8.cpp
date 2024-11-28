
#include <stdio.h>

int main() {
    int n;
    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &n);
    int mang[n][n];
    printf("\nMang 2 chieu duoi dang ma tran vuong:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", mang[i][j]);
        }
        printf("\n");
    }
    return 0;
}


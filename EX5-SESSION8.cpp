#include <stdio.h>

int main() {
    int mang[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int soDong = 3, soCot = 3;
    int tong = 0;

    for (int i = 0; i < soDong; i++) {
        for (int j = 0; j < soCot; j++) {
            if (i == 0 || i == soDong - 1 || j == 0 || j == soCot - 1) {
                tong += mang[i][j];
            }
        }
    }

    printf("Tong cac phan tu tren duong bien cua ma tran la: %d\n", tong);

    return 0;
}


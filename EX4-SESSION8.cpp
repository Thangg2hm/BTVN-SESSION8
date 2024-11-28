#include <stdio.h>

int main() {
    int mang[2][3] = {
        {10, 20, 30},
        {40, 50, 60}
    };
    int soDong = 2, soCot = 3;
    int max = mang[0][0];

    for (int i = 0; i < soDong; i++) {
        for (int j = 0; j < soCot; j++) {
            if (mang[i][j] > max) {
                max = mang[i][j];
            }
        }
    }

    printf("Phan tu lon nhat trong mang la: %d\n", max);

    return 0;
}


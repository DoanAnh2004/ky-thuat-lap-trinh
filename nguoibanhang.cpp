#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>
#define N 4

int tinhTongKhoangCach(int dothi[N][N]) {
    bool daTham[N];
    int hanhTrinh[N+1];
    int diemHienTai = 0;
    int khoangCachNhoNhat, chiSoNhoNhat;
    int tongKhoangCach = 0;

    // Kh?i t?o daTham v� hanhTrinh
    for (int i = 0; i < N; i++) {
        daTham[i] = false;
        hanhTrinh[i] = -1;
    }

    // B?t ??u t? ?i?m 0
    daTham[0] = true;
    hanhTrinh[0] = 0;

    // T�m c�c ?i?m ti?p theo
    for (int i = 0; i < N-1; i++) {
        khoangCachNhoNhat = INT_MAX;
        chiSoNhoNhat = -1;

        // T�m ?i?m g?n nh?t ch?a ???c th?m
        for (int j = 0; j < N; j++) {
            if (!daTham[j] && dothi[diemHienTai][j] < khoangCachNhoNhat) {
                khoangCachNhoNhat = dothi[diemHienTai][j];
                chiSoNhoNhat = j;
            }
        }

        // Th�m ?i?m ti?p theo v�o h�nh tr�nh
        daTham[chiSoNhoNhat] = true;
        hanhTrinh[i+1] = chiSoNhoNhat;
        diemHienTai = chiSoNhoNhat;
        tongKhoangCach += khoangCachNhoNhat;
    }

    // Th�m kho?ng c�ch t? ?i?m cu?i c�ng v? ?i?m ??u ti�n v�o t?ng kho?ng c�ch
    hanhTrinh[N] = 0;
    tongKhoangCach += dothi[diemHienTai][0];

    // In ra h�nh tr�nh v� t?ng kho?ng c�ch
    printf("Hanh trinh nguoi ban hang: ");
    for (int i = 0; i <= N; i++) {
        printf("%d ", hanhTrinh[i]);
    }
    printf("\nTong khoang cach: %d\n", tongKhoangCach);

    return tongKhoangCach;
}

int main() {
    int dothi[N][N] = {
        {0, 10, 15, 20},
        {10, 0, 35, 25},
        {15, 35, 0, 30},
        {20, 25, 30, 0}
    };

    tinhTongKhoangCach(dothi);

    return 0;
}


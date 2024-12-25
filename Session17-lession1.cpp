#include <stdio.h>
#include <stdlib.h>

void nhapPhanTu(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("Nh?p ph?n t? th? %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void hienThiPhanTu(int *arr, int n) {
    printf("C�c ph?n t? trong m?ng: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int tinhDoDaiMang(int n) {
    return n;
}

int tinhTongPhanTu(int *arr, int n) {
    int tong = 0;
    for (int i = 0; i < n; i++) {
        tong += arr[i];
    }
    return tong;
}

int hienThiPhanTuLonNhat(int *arr, int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int *arr;
    int n;
    int luaChon;

    do {
        printf("\nMENU\n");
        printf("1. Nh?p v�o s? ph?n t? v� t?ng ph?n t?\n");
        printf("2. Hi?n th? c�c ph?n t? trong m?ng\n");
        printf("3. T�nh d? d�i m?ng\n");
        printf("4. T�nh t?ng c�c ph?n t? trong m?ng\n");
        printf("5. Hi?n th? ph?n t? l?n nh?t\n");
        printf("6. Tho�t\n");
        printf("L?a ch?n c?a b?n: ");
        scanf("%d", &luaChon);

        switch (luaChon) {
            case 1:
                printf("Nh?p s? ph?n t?: ");
                scanf("%d", &n);
                arr = (int *)malloc(n * sizeof(int));
                nhapPhanTu(arr, n);
                break;
            case 2:
                hienThiPhanTu(arr, n);
                break;
            case 3:
                printf("�? d�i c?a m?ng l�: %d\n", tinhDoDaiMang(n));
                break;



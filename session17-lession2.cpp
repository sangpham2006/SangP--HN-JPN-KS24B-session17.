#include <stdio.h>

void nhapChuoi(char *str) {
    printf("Nh?p vào chu?i: ");
    scanf(" %[^\n]s", str);
}

void inChuoi(char *str) {
    printf("Chu?i v?a nh?p là: %s\n", str);
}

int demChuCai(char *str) {
    int count = 0;
    while (*str != '\0') {
        if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z')) {
            count++;
        }
        str++;
    }
    return count;
}

int demChuSo(char *str) {
    int count = 0;
    while (*str != '\0') {
        if (*str >= '0' && *str <= '9') {
            count++;
        }
        str++;
    }
    return count;
}

int demKyTuDacBiet(char *str) {
    int count = 0;
    while (*str != '\0') {
        if (!((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z') || (*str >= '0' && *str <= '9') || (*str == ' '))) {
            count++;
        }
        str++;
    }
    return count;
}

int main() {
    char str[100];
    int luaChon;

    do {
        printf("\nMENU\n");
        printf("1. Nh?p vào chu?i\n");
        printf("2. In ra chu?i\n");
        printf("3. Ğ?m s? lu?ng ch? cái trong chu?i và in ra\n");
        printf("4. Ğ?m s? lu?ng ch? s? trong chu?i và in ra\n");
        printf("5. Ğ?m s? lu?ng kı t? d?c bi?t trong chu?i và in ra\n");
        printf("6. Thoát\n");
        printf("L?a ch?n c?a b?n: ");
        scanf("%d", &luaChon);

        switch (luaChon) {
            case 1:
                nhapChuoi(str);
                break;
            case 2:
                inChuoi(str);
                break;
            case 3:
                printf("S? lu?ng ch? cái trong chu?i là: %d\n", demChuCai(str));
                break;
            case 4:
                printf("S? lu?ng ch? s? trong chu?i là: %d\n", demChuSo(str));
                break;
            case 5:
                printf("S? lu?ng kı t? d?c bi?t trong chu?i là: %d\n", demKyTuDacBiet(str));
                break;
            case 6:
                printf("Thoát chuong trình.\n");
                break;
            default:
                printf("L?a ch?n không h?p l?. Vui lòng ch?n l?i.\n");
        }
    } while (luaChon != 6);

    return 0;
}


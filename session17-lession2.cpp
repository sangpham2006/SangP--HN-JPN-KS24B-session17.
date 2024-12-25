#include <stdio.h>

void nhapChuoi(char *str) {
    printf("Nh?p v�o chu?i: ");
    scanf(" %[^\n]s", str);
}

void inChuoi(char *str) {
    printf("Chu?i v?a nh?p l�: %s\n", str);
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
        printf("1. Nh?p v�o chu?i\n");
        printf("2. In ra chu?i\n");
        printf("3. �?m s? lu?ng ch? c�i trong chu?i v� in ra\n");
        printf("4. �?m s? lu?ng ch? s? trong chu?i v� in ra\n");
        printf("5. �?m s? lu?ng k� t? d?c bi?t trong chu?i v� in ra\n");
        printf("6. Tho�t\n");
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
                printf("S? lu?ng ch? c�i trong chu?i l�: %d\n", demChuCai(str));
                break;
            case 4:
                printf("S? lu?ng ch? s? trong chu?i l�: %d\n", demChuSo(str));
                break;
            case 5:
                printf("S? lu?ng k� t? d?c bi?t trong chu?i l�: %d\n", demKyTuDacBiet(str));
                break;
            case 6:
                printf("Tho�t chuong tr�nh.\n");
                break;
            default:
                printf("L?a ch?n kh�ng h?p l?. Vui l�ng ch?n l?i.\n");
        }
    } while (luaChon != 6);

    return 0;
}


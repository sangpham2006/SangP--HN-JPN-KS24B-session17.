#include <stdio.h>
#include <string.h>
#include <ctype.h>

void nhapChuoi(char *str) {
    printf("Nh?p vào chu?i: ");
    scanf(" %[^\n]s", str);
}

void inChuoiDaoNguoc(char *str) {
    int length = strlen(str);
    printf("Chu?i d?o ngu?c là: ");
    for (int i = length - 1; i >= 0; i--) {
        putchar(*(str + i));
    }
    printf("\n");
}

int demSoTu(char *str) {
    int count = 0;
    int inWord = 0;
    while (*str != '\0') {
        if (isspace(*str)) {
            inWord = 0;
        } else if (!inWord) {
            inWord = 1;
            count++;
        }
        str++;
    }
    return count;
}

void soSanhChuoi(char *str1, char *str2) {
    if (strlen(str1) > strlen(str2)) {
        printf("Chu?i m?i ng?n hon chu?i ban d?u.\n");
    } else if (strlen(str1) < strlen(str2)) {
        printf("Chu?i m?i dài hon chu?i ban d?u.\n");
    } else {
        printf("Hai chu?i có d? dài b?ng nhau.\n");
    }
}

void inHoaChuCai(char *str) {
    while (*str != '\0') {
        *str = toupper(*str);
        str++;
    }
    printf("Chu?i in hoa là: %s\n", str);
}

void themChuoi(char *str1, char *str2) {
    strcat(str1, str2);
    printf("Chu?i sau khi thêm là: %s\n", str1);
}

int main() {
    char str1[100] = "";
    char str2[100];
    int luaChon;

    do {
        printf("\nMENU\n");
        printf("1. Nh?p vào chu?i\n");
        printf("2. In ra chu?i d?o ngu?c\n");
        printf("3. Ð?m s? lu?ng t? trong chu?i\n");
        printf("4. Nh?p vào chu?i khác, so sánh chu?i dó v?i chu?i ban d?u\n");
        printf("5. In hoa t?t c? ch? cái trong chu?i\n");
        printf("6. Nh?p vào chu?i khác và thêm chu?i dó vào chu?i ban d?u\n");
        printf("7. Thoát\n");
        printf("L?a ch?n c?a b?n: ");
        scanf("%d", &luaChon);

        switch (luaChon) {
            case 1:
                nhapChuoi(str1);
                break;
            case 2:
                inChuoiDaoNguoc(str1);
                break;
            case 3:
                printf("S? lu?ng t? trong chu?i là: %d\n", demSoTu(str1));
                break;
            case 4:
                printf("Nh?p vào chu?i khác: ");
                nhapChuoi(str2);
                soSanhChuoi(str1, str2);
                break;
            case 5:
                inHoaChuCai(str1);
                break;
            case 6:
                printf("Nh?p vào chu?i khác: ");
                nhapChuoi(str2);
                themChuoi(str1, str2);
                break;
            case 7:
                printf("Thoát chuong trình.\n");
                break;
            default:
                printf("L?a ch?n không h?p l?. Vui lòng ch?n l?i.\n");
        }
    } while (luaChon != 7);

    return 0;
}


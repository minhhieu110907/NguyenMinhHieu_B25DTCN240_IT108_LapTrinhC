#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000];
    int len, i;

    int maxLength = 0;
    int currentLength = 0;
    int longestWordStart = 0;
    int currentWordStart = 0;

    printf("Nhap vao mot chuoi: ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }
    str[len] = ' ';
    str[len + 1] = '\0';
    len++;

    for (i = 0; i < len; i++) {
        if (isspace(str[i])) {
            if (currentLength > 0) {
                if (currentLength > maxLength) {
                    maxLength = currentLength;
                    longestWordStart = currentWordStart;
                }
            }
            currentLength = 0;
            currentWordStart = i + 1; 
        } else {
            currentLength++;
        }
    }

    if (maxLength == 0) {
        printf("Khong tim thay tu nao trong chuoi.\n");
    } else {
        printf("Tu dai nhat la: ");
        for (i = 0; i < maxLength; i++) {
            printf("%c", str[longestWordStart + i]);
        }
        printf("\nSo ky tu: %d\n", maxLength);
    }

    return 0;
}

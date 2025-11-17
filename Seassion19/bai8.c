#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 1000

int numberArray[MAX_SIZE];
int arraySize = 0;

void display_menu() {
    printf("\n=================== MENU ===================\n");
    printf("1. Nhap vao so phan tu va tung phan tu\n");
    printf("2. In ra cac phan tu la so chan\n");
    printf("3. In ra cac phan tu la so nguyen to\n");
    printf("4. Dao nguoc mang\n");
    printf("5. Sap xep mang\n");
    printf("   5.1 Tang dan\n");
    printf("   5.2 Giam dan\n");
    printf("6. Nhap vao mot phan tu va tim kiem\n");
    printf("7. Thoat\n");
    printf("===========================================\n");
    printf("Lua chon cua ban: ");
}

void input_array(int *arr, int *size) {
    int n;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    if (n < 0 || n > MAX_SIZE) {
        printf("So phan tu khong hop le!\n");
        return;
    }

    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", arr + i);
    }

    *size = n;
    printf("Da nhap xong %d phan tu.\n", *size);
}

void print_even_numbers(const int *arr, int size) {
    if (size == 0) {
        printf("Mang trong.\n");
        return;
    }
    printf("Cac so chan: ");
    int found = 0;
    for (int i = 0; i < size; i++) {
        if (*(arr + i) % 2 == 0) {
            printf("%d ", *(arr + i));
            found = 1;
        }
    }
    if (!found) {
        printf("Khong co so chan nao.");
    }
    printf("\n");
}

int la_so_nguyen_to(int n) {
    if (n < 2) {
        return 0;
    }
    if (n == 2) {
        return 1;
    }
    if (n % 2 == 0) {
        return 0;
    }
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

void print_prime_numbers(const int *arr, int size) {
    if (size == 0) {
        printf("Mang trong.\n");
        return;
    }
    printf("Cac so nguyen to: ");
    int found = 0;
    for (int i = 0; i < size; i++) {
        if (la_so_nguyen_to(*(arr + i))) {
            printf("%d ", *(arr + i));
            found = 1;
        }
    }
    if (!found) {
        printf("Khong co so nguyen to nao.");
    }
    printf("\n");
}

void reverse_array(int *arr, int size) {
    if (size == 0) {
        printf("Mang trong.\n");
        return;
    }
    int *left = arr;
    int *right = arr + size - 1;
    while (left < right) {
        int temp = *left;
        *left = *right;
        *right = temp;
        left++;
        right--;
    }
    printf("Da dao nguoc mang.\n");
}

void sort_array(int *arr, int size, int isAscending) {
    if (size == 0) {
        printf("Mang trong.\n");
        return;
    }
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            int need_swap = 0;
            if (isAscending && (*(arr + i) > *(arr + j))) {
                need_swap = 1;
            } else if (!isAscending && (*(arr + i) < *(arr + j))) {
                need_swap = 1;
            }
            if (need_swap) {
                int tmp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = tmp;
            }
        }
    }
    if (isAscending) {
        printf("Da sap xep mang theo thu tu tang dan.\n");
    } else {
        printf("Da sap xep mang theo thu tu giam dan.\n");
    }
}

void search_value(const int *arr, int size) {
    if (size == 0) {
        printf("Mang trong.\n");
        return;
    }
    int value;
    printf("Nhap gia tri can tim: ");
    scanf("%d", &value);
    int found = 0;
    for (int i = 0; i < size; i++) {
        if (*(arr + i) == value) {
            printf("Tim thay %d tai vi tri %d.\n", value, i);
            found = 1;
        }
    }
    if (!found) {
        printf("Khong tim thay %d trong mang.\n", value);
    }
}

void print_array(const int *arr, int size) {
    if (size == 0) {
        printf("Mang trong.\n");
        return;
    }
    printf("Mang hien tai: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int lua_chon;
    while (1) {
        display_menu();
        if (scanf("%d", &lua_chon) != 1) {
            printf("Nhap sai dinh dang. Thoat!\n");
            break;
        }
        switch (lua_chon) {
            case 1:
                input_array(numberArray, &arraySize);
                print_array(numberArray, arraySize);
                break;
            case 2:
                print_even_numbers(numberArray, arraySize);
                break;
            case 3:
                print_prime_numbers(numberArray, arraySize);
                break;
            case 4:
                reverse_array(numberArray, arraySize);
                print_array(numberArray, arraySize);
                break;
            case 5: {
                int lua_chon_sap_xep;
                printf("Chon 1 de sap xep tang, 2 de sap xep giam: ");
                scanf("%d", &lua_chon_sap_xep);
                if (lua_chon_sap_xep == 1) {
                    sort_array(numberArray, arraySize, 1);
                } else if (lua_chon_sap_xep == 2) {
                    sort_array(numberArray, arraySize, 0);
                } else {
                    printf("Lua chon khong hop le.\n");
                }
                print_array(numberArray, arraySize);
                break;
            }
            case 6:
                search_value(numberArray, arraySize);
                break;
            case 7:
                printf("Tam biet!\n");
                return 0;
            default:
                printf("Lua chon khong hop le, vui long thu lai.\n");
                break;
        }
    }
    return 0;
}



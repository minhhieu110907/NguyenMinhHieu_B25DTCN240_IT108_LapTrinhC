#include <stdio.h>
#define MAX 1000
void inputArray(int *a, int *n) {
    printf("Nhap so phan tu: ");
    scanf("%d", n);

    printf("Nhap cac phan tu:\n");
    for (int i = 0; i < *n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", (a + i));   
    }
}

void printArray(int *a, int n) {
    printf("Cac phan tu trong mang: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(a + i));
    }
    printf("\n");
}

int getLength(int n) {
    return n;
}


int sumArray(int *a, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *(a + i);
    }
    return sum;
}


int findMax(int *a, int n) {
    int max = *a;
    for (int i = 1; i < n; i++) {
        if (*(a + i) > max) {
            max = *(a + i);
        }
    }
    return max;
}

int main() {
    int a[MAX];
    int n = 0;
    int choice;

    do {
        printf("\n===== MENU =====\n");
        printf("1. Nhap mang\n");
        printf("2. Hien thi mang\n");
        printf("3. Do dai mang\n");
        printf("4. Tong mang\n");
        printf("5. Phan tu lon nhat\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                inputArray(a, &n);
                break;

            case 2:
                printArray(a, n);
                break;

            case 3:
                printf("Do dai mang: %d\n", getLength(n));
                break;

            case 4:
                printf("Tong cac phan tu: %d\n", sumArray(a, n));
                break;

            case 5:
                printf("Phan tu lon nhat: %d\n", findMax(a, n));
                break;

            case 6:
                printf("Thoat chuong trinh...\n");
                break;

            default:
                printf("Lua chon khong hop le!\n");
        }

    } while (choice != 6);

    return 0;
}


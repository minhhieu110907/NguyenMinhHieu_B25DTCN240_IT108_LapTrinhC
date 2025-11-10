#include<stdio.h>
#define MAX_SIZE 100 
void updateElement(int a[], int n, int x, int pos) {
    if (pos >= 0 && pos < n) {
        a[pos] = x;
    } else {
        printf("Vi tri khong hop le!\n");
    }
}

void deleteElement(int a[], int *n, int pos) {
    if (pos >= 0 && pos < *n) {
        for (int i = pos; i < *n - 1; i++) {
            a[i] = a[i + 1];
        }
        (*n)--;
        printf("Da xoa thanh cong\n");
    } else {
        printf("Vi tri khong hop le!\n");
    }
}

void addElement(int a[], int *n, int x, int pos) {
    if (*n >= MAX_SIZE) {
        printf("Mang da day, khong the them phan tu!\n");
        return;
    }
    if (pos >= 0 && pos <= *n) {
        for (int i = *n; i > pos; i--) {
            a[i] = a[i - 1];
        }
        a[pos] = x;
        (*n)++;
        printf("Da them thanh cong\n");
    } else {
        printf("Vi tri khong hop le!\n");
    }
}

void insertionSort(int a[], int n) {
    int j, key;
    for (int i = 1; i < n; i++) {
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}

void reverseArray(int a[], int n) {
    int start = 0;
    int end = n - 1;
    while (start < end) {
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }
}

int linearSearch(int a[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            return i;
        }
    }
    return -1;
}

int binarySearch(int a[], int n, int x) {
    int start = 0;
    int end = n - 1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (a[mid] == x) {
            return mid;
        } else if (a[mid] < x) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1;
}
void printArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}


int main() {
    int choose;
    int flag = 0;
    int a[MAX_SIZE];
    int n = 0;
    int x, pos;
    do {
        printf("\n----------MENU----------\n");
        printf("1. Nhap so luong phan tu cua mang va nhap cac phan tu cua mang\n");
        printf("2. Xuat ra cac phan tu cua mang\n");
        printf("3. Them 1 phan tu trong mang o vi tri bat ki\n");
        printf("4. Sua 1 phan tu trong mang\n");
        printf("5. Xoa phan tu o vi tri bat ki\n");
        printf("6. Sap xep cac phan tu\n");
        printf("          a. Tang dan\n");
        printf("          b. Giam dan\n");
        printf("7. Tim kiem mot phan tu trong mang\n");
        printf("          a. Tim kiem tuyen tinh\n");
        printf("          b. Tim kiem nhi phan\n");
        printf("8. Thoat\n");

        printf("Moi ban chon: ");
        if (scanf("%d", &choose) != 1) {
             int c;
             choose = 0;
        }


        switch (choose) {
            case 1: {
                flag = 0;
                printf("Nhap so luong phan tu cua mang (toi da %d): ", MAX_SIZE);
                if (scanf("%d", &n) != 1 || n <= 0 || n > MAX_SIZE) {
                    printf("So luong phan tu khong hop le.\n");
                    n = 0;
                    break;
                }

                for (int i = 0; i < n; i++) {
                    printf("Moi ban nhap vao phan tu a[%d]: ", i);
                    if (scanf("%d", &a[i]) != 1) {
                        printf("Loi nhap phan tu. Nhap lai tu dau.\n");
                        n = 0;
                        break;
                    }
                }
                if (n > 0) {
                    flag = 1;
                    printf("Da nhap mang thanh cong.\n");
                }
                break;
            }
            case 2: {
                if (flag == 0) {
                    printf("Ban chua nhap mang\n");
                } else {
                    printf("Cac phan tu cua mang: ");
                    printArray(a, n);
                }
                break;
            }
            case 3: {
                if (flag == 0) {
                    printf("Ban chua nhap mang\n");
                } else {
                    printf("Moi ban nhap phan tu can them: ");
                    scanf("%d", &x);
                    printf("Moi ban nhap vi tri can them (tu 0 den %d): ", n);
                    scanf("%d", &pos);
                    addElement(a, &n, x, pos);
                    printf("Mang moi: ");
                    printArray(a, n);
                }
                break;
            }
            case 4: {
                if (flag == 0) {
                    printf("Ban chua nhap mang\n");
                } else {
                    printf("Moi ban nhap phan tu can sua: ");
                    scanf("%d", &x);
                    printf("Moi ban nhap vi tri can sua (tu 0 den %d): ", n - 1);
                    scanf("%d", &pos);
                    updateElement(a, n, x, pos);
                    printf("Da sua thanh cong\n");
                    printf("Mang moi: ");
                    printArray(a, n);
                }
                break;
            }
            case 5: {
                if (flag == 0) {
                    printf("Ban chua nhap mang\n");
                } else {
                    printf("Moi ban nhap vi tri can xoa (tu 0 den %d): ", n - 1);
                    scanf("%d", &pos);
                    deleteElement(a, &n, pos);
                    printf("Mang moi: ");
                    printArray(a, n);
                }
                break;
            }
            case 6: {
                if (flag == 0) {
                    printf("Ban chua nhap mang\n");
                } else {
                    char c;
                    printf("Moi ban chon a hoac b: ");
                    if (scanf("%c", &c) != 1) { 
                        break;
                    }

                    switch (c) {
                        case 'a': {
                            insertionSort(a, n);
                            printf("Da sap xep tang dan thanh cong: ");
                            printArray(a, n);
                            break;
                        }
                        case 'b': {
                            insertionSort(a, n);
                            reverseArray(a, n);
                            printf("Da sap xep giam dan thanh cong: ");
                            printArray(a, n);
                            break;
                        }
                        default: {
                            printf("Lua chon khong hop le.\n");
                            break;
                        }
                    }
                }
                break;
            }
            case 7: {
                if (flag == 0) {
                    printf("Ban chua nhap mang\n");
                } else {
                    char d;
                    int x_search, result_index;

                    printf("Moi ban chon a hoac b: ");
                    if (scanf("%c", &d) != 1) { 
                         break;
                    }

                    switch (d) {
                        case 'a': {
                            printf("Moi ban nhap phan tu can tim: ");
                            if (scanf("%d", &x_search) != 1) {
                                printf("Loi nhap phan tu.\n");
                                break;
                            }
                            result_index = linearSearch(a, n, x_search);
                            if (result_index != -1) {
                                printf("Tim thay phan tu %d tai vi tri: %d (tim kiem tuyen tinh)\n", x_search, result_index);
                            } else {
                                printf("Khong tim thay phan tu %d.\n", x_search);
                            }
                            break;
                        }
                        case 'b': {
                            insertionSort(a, n); 
                            printf("Mang da duoc sap xep (tang dan) de tim kiem nhi phan: ");
                            printArray(a, n);

                            printf("Moi ban nhap phan tu can tim: ");
                            if (scanf("%d", &x_search) != 1) {
                                printf("Loi nhap phan tu.\n");
                                break;
                            }

                            result_index = binarySearch(a, n, x_search);
                            if (result_index != -1) {
                                printf("Tim thay phan tu %d tai vi tri: %d (tim kiem nhi phan)\n", x_search, result_index);
                            } else {
                                printf("Khong tim thay phan tu %d.\n", x_search);
                            }
                            break;
                        }
                        default: {
                            printf("Lua chon khong hop le.\n");
                            break;
                        }
                    }
                }
                break;
            }
            case 8: {
                printf("Thoat chuong trinh\n");
                break;
            }
            default: {
                printf("Lua chon khong hop le. Vui long chon lai.\n");
                break;
            }
        }
    } while (choose != 8);

    return 0;
}

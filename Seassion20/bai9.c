#include<stdio.h>
#include<string.h>
#include<stdlib.h>
// Dinh nghia cau truc Dish
struct Dish {
    int id;
    char name[50];
    float price;
};

// Bien toan cuc de luu so luong phan tu hien tai
int count = 5;

// Ham hien thi menu
void printMenu() {
    printf("\n========================================\n");
    printf("           MENU QUAN LY MON AN         \n");
    printf("========================================\n");
    printf("1. In ra gia tri cac phan tu co trong menu mon an\n");
    printf("2. Them mot phan tu vao vi tri chi dinh\n");
    printf("3. Sua mot phan tu o vi tri chi dinh\n");
    printf("4. Xoa mot phan tu o vi tri chi dinh\n");
    printf("5. Sap xep cac phan tu\n");
    printf("6. Tim kiem phan tu theo name nhap vao\n");
    printf("7. Thoat\n");
    printf("========================================\n");
    printf("Lua chon cua ban: ");
}

// Ham in danh sach mon an
void printDishes(struct Dish menu[], int n) {
    if (n == 0) {
        printf("Menu trong!\n");
        return;
    }
    printf("\n--- DANH SACH MON AN ---\n");
    for (int i = 0; i < n; i++) {
        printf("%d. id: %d\n", i + 1, menu[i].id);
        printf("   name: %s\n", menu[i].name);
        printf("   price: %.2f\n", menu[i].price);
        printf("\n");
    }
}

// Ham them phan tu vao vi tri chi dinh
void addDish(struct Dish menu[], int *count) {
    int position;
    struct Dish newDish;
    
    if (*count >= 100) {
        printf("Menu da day! Khong the them nua.\n");
        return;
    }
    
    printf("Nhap vi tri muon them (1-%d): ", *count + 1);
    scanf("%d", &position);
    
    if (position < 1 || position > *count + 1) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    
    printf("Nhap thong tin mon an moi:\n");
    printf("ID: ");
    scanf("%d", &newDish.id);
    printf("Ten mon: ");
    fflush(stdin);
    fgets(newDish.name, sizeof(newDish.name), stdin);
    newDish.name[strcspn(newDish.name, "\n")] = 0; // Xoa ky tu xuong dong
    printf("Gia: ");
    scanf("%f", &newDish.price);
    
    // Dich chuyen cac phan tu sang phai
    for (int i = *count; i >= position; i--) {
        menu[i] = menu[i - 1];
    }
    
    // Chen phan tu moi
    menu[position - 1] = newDish;
    (*count)++;
    printf("Da them mon an thanh cong!\n");
}

// Ham sua phan tu o vi tri chi dinh
void editDish(struct Dish menu[], int count) {
    int position;
    
    if (count == 0) {
        printf("Menu trong! Khong co gi de sua.\n");
        return;
    }
    
    printf("Nhap vi tri muon sua (1-%d): ", count);
    scanf("%d", &position);
    
    if (position < 1 || position > count) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    
    printf("Nhap thong tin moi cho mon an:\n");
    printf("ID (hien tai: %d): ", menu[position - 1].id);
    scanf("%d", &menu[position - 1].id);
    printf("Ten mon (hien tai: %s): ", menu[position - 1].name);
    fflush(stdin);
    fgets(menu[position - 1].name, sizeof(menu[position - 1].name), stdin);
    menu[position - 1].name[strcspn(menu[position - 1].name, "\n")] = 0; // Xoa ky tu xuong dong
    printf("Gia (hien tai: %.2f): ", menu[position - 1].price);
    scanf("%f", &menu[position - 1].price);
    
    printf("Da cap nhat mon an thanh cong!\n");
}

// Ham xoa phan tu o vi tri chi dinh
void deleteDish(struct Dish menu[], int *count) {
    int position;
    
    if (*count == 0) {
        printf("Menu trong! Khong co gi de xoa.\n");
        return;
    }
    
    printf("Nhap vi tri muon xoa (1-%d): ", *count);
    scanf("%d", &position);
    
    if (position < 1 || position > *count) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    
    // Dich chuyen cac phan tu sang trai
    for (int i = position - 1; i < *count - 1; i++) {
        menu[i] = menu[i + 1];
    }
    
    (*count)--;
    printf("Da xoa mon an thanh cong!\n");
}

// Ham sap xep bubble sort giam dan theo price
void bubbleSortDescending(struct Dish menu[], int count) {
    int i, j;
    struct Dish temp;
    for (i = 0; i < count - 1; i++) {
        for (j = 0; j < count - i - 1; j++) {
            if (menu[j].price < menu[j + 1].price) {
                temp = menu[j];
                menu[j] = menu[j + 1];
                menu[j + 1] = temp;
            }
        }
    }
}

// Ham sap xep bubble sort tang dan theo price
void bubbleSortAscending(struct Dish menu[], int count) {
    int i, j;
    struct Dish temp;
    for (i = 0; i < count - 1; i++) {
        for (j = 0; j < count - i - 1; j++) {
            if (menu[j].price > menu[j + 1].price) {
                temp = menu[j];
                menu[j] = menu[j + 1];
                menu[j + 1] = temp;
            }
        }
    }
}

// Ham sap xep voi menu con
void sortDishes(struct Dish menu[], int count) {
    int choice;
    
    if (count == 0) {
        printf("Menu trong! Khong co gi de sap xep.\n");
        return;
    }
    
    printf("\n--- MENU SAP XEP ---\n");
    printf("a. Giam dan theo price\n");
    printf("b. Tang dan theo price\n");
    printf("Lua chon cua ban: ");
    fflush(stdin);
    choice = getchar();
    
    switch (choice) {
        case 'a':
        case 'A':
            bubbleSortDescending(menu, count);
            printf("Da sap xep giam dan theo price!\n");
            break;
        case 'b':
        case 'B':
            bubbleSortAscending(menu, count);
            printf("Da sap xep tang dan theo price!\n");
            break;
        default:
            printf("Lua chon khong hop le!\n");
            break;
    }
}

// Ham tim kiem tuyen tinh
int linearSearch(struct Dish menu[], int count, char searchName[]) {
    for (int i = 0; i < count; i++) {
        if (strcmp(menu[i].name, searchName) == 0) {
            return i;
        }
    }
    return -1;
}

// Ham tim kiem nhi phan (yeu cau mang da duoc sap xep theo name)
int binarySearch(struct Dish menu[], int count, char searchName[]) {
    int left = 0, right = count - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        int cmp = strcmp(menu[mid].name, searchName);
        if (cmp == 0) {
            return mid;
        } else if (cmp < 0) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

// Ham sap xep bubble sort theo name (cho binary search)
void bubbleSortByName(struct Dish menu[], int count) {
    int i, j;
    struct Dish temp;
    for (i = 0; i < count - 1; i++) {
        for (j = 0; j < count - i - 1; j++) {
            if (strcmp(menu[j].name, menu[j + 1].name) > 0) {
                temp = menu[j];
                menu[j] = menu[j + 1];
                menu[j + 1] = temp;
            }
        }
    }
}

// Ham tim kiem voi menu con
void searchDishes(struct Dish menu[], int count) {
    int choice;
    char searchName[50];
    int result;
    
    if (count == 0) {
        printf("Menu trong! Khong co gi de tim kiem.\n");
        return;
    }
    
    printf("\n--- MENU TIM KIEM ---\n");
    printf("a. Tim kiem tuyen tinh\n");
    printf("b. Tim kiem nhi phan\n");
    printf("Lua chon cua ban: ");
    fflush(stdin);
    choice = getchar();
    
    printf("Nhap ten mon an muon tim: ");
    fflush(stdin);
    fgets(searchName, sizeof(searchName), stdin);
    searchName[strcspn(searchName, "\n")] = 0;
    
    switch (choice) {
        case 'a':
        case 'A':
            result = linearSearch(menu, count, searchName);
            if (result != -1) {
                printf("\nTim thay mon an tai vi tri %d:\n", result + 1);
                printf("id: %d\n", menu[result].id);
                printf("name: %s\n", menu[result].name);
                printf("price: %.2f\n", menu[result].price);
            } else {
                printf("Khong tim thay mon an co ten: %s\n", searchName);
            }
            break;
        case 'b':
        case 'B':
            {
                // Sap xep theo name truoc khi tim kiem nhi phan
                // Tao ban sao de khong lam thay doi mang goc
                struct Dish tempMenu[100];
                int i;
                for (i = 0; i < count; i++) {
                    tempMenu[i] = menu[i];
                }
                bubbleSortByName(tempMenu, count);
                
                result = binarySearch(tempMenu, count, searchName);
                if (result != -1) {
                    printf("\nTim thay mon an:\n");
                    printf("id: %d\n", tempMenu[result].id);
                    printf("name: %s\n", tempMenu[result].name);
                    printf("price: %.2f\n", tempMenu[result].price);
                } else {
                    printf("Khong tim thay mon an co ten: %s\n", searchName);
                }
            }
            break;
        default:
            printf("Lua chon khong hop le!\n");
            break;
    }
}

int main() {
    struct Dish menu[100];
    int choice;
    
    menu[0].id = 1;
    strcpy(menu[0].name, "Pho bo");
    menu[0].price = 50000;
    
    menu[1].id = 2;
    strcpy(menu[1].name, "Bun cha");
    menu[1].price = 40000;
    
    menu[2].id = 3;
    strcpy(menu[2].name, "Banh mi");
    menu[2].price = 20000;
    
    menu[3].id = 4;
    strcpy(menu[3].name, "Com tam");
    menu[3].price = 35000;
    
    menu[4].id = 5;
    strcpy(menu[4].name, "Bun bo Hue");
    menu[4].price = 45000;
    
    while (1) {
        printMenu();
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printDishes(menu, count);
                break;
            case 2:
                addDish(menu, &count);
                break;
            case 3:
                editDish(menu, count);
                break;
            case 4:
                deleteDish(menu, &count);
                break;
            case 5:
                sortDishes(menu, count);
                break;
            case 6:
                searchDishes(menu, count);
                break;
            case 7:
                printf("Cam on ban da su dung chuong trinh! Tam biet!\n");
                exit(0);
            default:
                printf("Lua chon khong hop le! Vui long chon lai.\n");
                break;
        }
    }
    
    return 0;
}


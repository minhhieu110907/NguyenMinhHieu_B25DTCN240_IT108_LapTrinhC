#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STR 100

typedef struct {
    char id[MAX_STR];
    char title[MAX_STR];
    char author[MAX_STR];
    double price;
} Book;

void inputBooks(Book **books, int *count) {
    int n;
    printf("Nhap so luong sach: ");
    scanf("%d", &n);
    getchar();

    *books = (Book *)realloc(*books, n * sizeof(Book));
    *count = n;

    for (int i = 0; i < n; ++i) {
        printf("Sach thu %d:\n", i + 1);
        printf("  Ma sach: ");
        fgets((*books)[i].id, MAX_STR, stdin);
        (*books)[i].id[strcspn((*books)[i].id, "\n")] = 0;

        printf("  Ten sach: ");
        fgets((*books)[i].title, MAX_STR, stdin);
        (*books)[i].title[strcspn((*books)[i].title, "\n")] = 0;

        printf("  Tac gia: ");
        fgets((*books)[i].author, MAX_STR, stdin);
        (*books)[i].author[strcspn((*books)[i].author, "\n")] = 0;

        printf("  Gia: ");
        scanf("%lf", &(*books)[i].price);
        getchar();
    }
}

void displayBooks(const Book *books, int count) {
    if (count == 0) {
        printf("Danh sach rong.\n");
        return;
    }
    printf("%-10s %-25s %-20s %-10s\n", "Ma", "Ten", "Tac gia", "Gia");
    for (int i = 0; i < count; ++i) {
        printf("%-10s %-25s %-20s %-10.2f\n",
               books[i].id, books[i].title, books[i].author, books[i].price);
    }
}

void insertBook(Book **books, int *count) {
    Book b;
    getchar();
    printf("Nhap thong tin sach can them:\n");
    printf("  Ma sach: ");
    fgets(b.id, MAX_STR, stdin);
    b.id[strcspn(b.id, "\n")] = 0;

    printf("  Ten sach: ");
    fgets(b.title, MAX_STR, stdin);
    b.title[strcspn(b.title, "\n")] = 0;

    printf("  Tac gia: ");
    fgets(b.author, MAX_STR, stdin);
    b.author[strcspn(b.author, "\n")] = 0;

    printf("  Gia: ");
    scanf("%lf", &b.price);

    int pos;
    printf("Nhap vi tri chen (0...%d): ", *count);
    scanf("%d", &pos);

    if (pos < 0 || pos > *count) {
        printf("Vi tri khong hop le.\n");
        return;
    }

    *books = (Book *)realloc(*books, (*count + 1) * sizeof(Book));
    memmove(*books + pos + 1, *books + pos, (*count - pos) * sizeof(Book));
    (*books)[pos] = b;
    (*count)++;
    printf("Da chen sach.\n");
}

void deleteBook(Book **books, int *count) {
    char id[MAX_STR];
    getchar();
    printf("Nhap ma sach can xoa: ");
    fgets(id, MAX_STR, stdin);
    id[strcspn(id, "\n")] = 0;

    for (int i = 0; i < *count; ++i) {
        if (strcmp((*books)[i].id, id) == 0) {
            memmove(*books + i, *books + i + 1, (*count - i - 1) * sizeof(Book));
            (*count)--;
            *books = (Book *)realloc(*books, *count * sizeof(Book));
            printf("Da xoa sach.\n");
            return;
        }
    }
    printf("Khong tim thay ma sach.\n");
}

void updateBook(Book *books, int count) {
    char id[MAX_STR];
    getchar();
    printf("Nhap ma sach can cap nhat: ");
    fgets(id, MAX_STR, stdin);
    id[strcspn(id, "\n")] = 0;

    for (int i = 0; i < count; ++i) {
        if (strcmp(books[i].id, id) == 0) {
            printf("Nhap thong tin moi:\n");
            printf("  Ten sach: ");
            fgets(books[i].title, MAX_STR, stdin);
            books[i].title[strcspn(books[i].title, "\n")] = 0;

            printf("  Tac gia: ");
            fgets(books[i].author, MAX_STR, stdin);
            books[i].author[strcspn(books[i].author, "\n")] = 0;

            printf("  Gia: ");
            scanf("%lf", &books[i].price);
            printf("Cap nhat thanh cong.\n");
            return;
        }
    }
    printf("Khong tim thay ma sach.\n");
}

void sortBooks(Book *books, int count) {
    int choice;
    printf("1. Tang dan\n2. Giam dan\nChon: ");
    scanf("%d", &choice);

    for (int i = 0; i < count - 1; ++i) {
        for (int j = i + 1; j < count; ++j) {
            int cond = choice == 1 ? books[i].price > books[j].price
                                   : books[i].price < books[j].price;
            if (cond) {
                Book tmp = books[i];
                books[i] = books[j];
                books[j] = tmp;
            }
        }
    }
    printf("Da sap xep.\n");
}

void searchByTitle(const Book *books, int count) {
    char keyword[MAX_STR];
    getchar();
    printf("Nhap ten sach can tim (co the mot phan): ");
    fgets(keyword, MAX_STR, stdin);
    keyword[strcspn(keyword, "\n")] = 0;

    int found = 0;
    for (int i = 0; i < count; ++i) {
        if (strstr(books[i].title, keyword) != NULL) {
            if (!found) {
                printf("Ket qua:\n");
                found = 1;
            }
            printf("  %s - %s - %s - %.2f\n",
                   books[i].id, books[i].title, books[i].author, books[i].price);
        }
    }
    if (!found) printf("Khong co sach phu hop.\n");
}

int main() {
    Book *books = NULL;
    int count = 0, choice;

    do {
        printf("\nMENU\n"
               "1. Nhap so luong va thong tin sach\n"
               "2. Hien thi thong tin sach\n"
               "3. Them sach vao vi tri\n"
               "4. Xoa sach theo ma\n"
               "5. Cap nhat sach theo ma\n"
               "6. Sap xep sach theo gia\n"
               "7. Tim sach theo ten\n"
               "0. Thoat\n"
               "Chon: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: inputBooks(&books, &count); break;
            case 2: displayBooks(books, count); break;
            case 3: insertBook(&books, &count); break;
            case 4: deleteBook(&books, &count); break;
            case 5: updateBook(books, count); break;
            case 6: sortBooks(books, count); break;
            case 7: searchByTitle(books, count); break;
            case 0: printf("Tam biet!\n"); break;
            default: printf("Lua chon khong hop le.\n");
        }
    } while (choice != 0);

    free(books);
    return 0;
}

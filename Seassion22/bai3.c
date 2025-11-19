#include <stdio.h>
#include <string.h>

typedef struct {
    int day;
    int month;
    int year;
} Date;

typedef struct {
    char id[20];
    char fullName[50];
    Date birth;
    char address[100];
    char phone[20];
} Student;

void inputStudent(Student *s) {
    printf("Nhap ma sinh vien: ");
    fgets(s->id, 20, stdin);
    s->id[strcspn(s->id, "\n")] = 0;

    printf("Nhap ho ten: ");
    fgets(s->fullName, 50, stdin);
    s->fullName[strcspn(s->fullName, "\n")] = 0;

    printf("Nhap ngay sinh (dd mm yyyy): ");
    scanf("%d %d %d", &s->birth.day, &s->birth.month, &s->birth.year);
    getchar();

    printf("Nhap dia chi: ");
    fgets(s->address, 100, stdin);
    s->address[strcspn(s->address, "\n")] = 0;

    printf("Nhap dien thoai: ");
    fgets(s->phone, 20, stdin);
    s->phone[strcspn(s->phone, "\n")] = 0;
}

void printStudent(Student s) {
    printf("\nMa sinh vien: %s\n", s.id);
    printf("Ho ten: %s\n", s.fullName);
    printf("Ngay sinh: %02d/%02d/%04d\n", s.birth.day, s.birth.month, s.birth.year);
    printf("Dia chi: %s\n", s.address);
    printf("Dien thoai: %s\n\n", s.phone);
}

int findById(Student arr[], int n, char id[]) {
    for (int i = 0; i < n; i++)
        if (strcmp(arr[i].id, id) == 0) return i;
    return -1;
}

void addStudent(Student arr[], int *n) {
    inputStudent(&arr[*n]);
    (*n)++;
}

void deleteStudent(Student arr[], int *n) {
    char id[20];
    printf("Nhap ma sinh vien can xoa: ");
    fgets(id, 20, stdin);
    id[strcspn(id, "\n")] = 0;

    int pos = findById(arr, *n, id);
    if (pos == -1) {
        printf("Khong tim thay sinh vien.\n");
        return;
    }
    for (int i = pos; i < *n - 1; i++)
        arr[i] = arr[i + 1];
    (*n)--;

    printf("Da xoa sinh vien.\n");
}

void updateStudent(Student arr[], int n) {
    char id[20];
    printf("Nhap ma sinh vien can cap nhat: ");
    fgets(id, 20, stdin);
    id[strcspn(id, "\n")] = 0;

    int pos = findById(arr, n, id);
    if (pos == -1) {
        printf("Khong tim thay sinh vien.\n");
        return;
    }

    inputStudent(&arr[pos]);
    printf("Da cap nhat.\n");
}

void sortByName(Student arr[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (strcmp(arr[i].fullName, arr[j].fullName) > 0) {
                Student temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
    printf("Da sap xep.\n");
}

void searchStudent(Student arr[], int n) {
    char id[20];
    printf("Nhap ma sinh vien can tim: ");
    fgets(id, 20, stdin);
    id[strcspn(id, "\n")] = 0;

    int pos = findById(arr, n, id);
    if (pos == -1) {
        printf("Khong tim thay sinh vien.\n");
        return;
    }
    printStudent(arr[pos]);
}

int main() {
    Student students[100];
    int n = 0, choice;

    while (1) {
        printf("\n===== MENU =====\n");
        printf("1. Nhap thong tin sinh vien\n");
        printf("2. Hien thi sinh vien\n");
        printf("3. Them sinh vien\n");
        printf("4. Xoa sinh vien theo ma\n");
        printf("5. Cap nhat sinh vien theo ma\n");
        printf("6. Sap xep theo ho ten\n");
        printf("7. Tim kiem theo ma sinh vien\n");
        printf("8. Thoat\n");
        printf("Chon: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                printf("Nhap so luong sinh vien: ");
                scanf("%d", &n);
                getchar();
                for (int i = 0; i < n; i++)
                    inputStudent(&students[i]);
                break;

            case 2:
                for (int i = 0; i < n; i++)
                    printStudent(students[i]);
                break;

            case 3:
                addStudent(students, &n);
                break;

            case 4:
                deleteStudent(students, &n);
                break;

            case 5:
                updateStudent(students, n);
                break;

            case 6:
                sortByName(students, n);
                break;

            case 7:
                searchStudent(students, n);
                break;

            case 8:
                return 0;

            default:
                printf("Lua chon khong hop le!\n");
        }
    }
}


#include <stdio.h>
#include <string.h>
struct Student {
    int id;
    char name[50];
    int age;
    char phoneNumber[20];
};

void displayStudent(struct Student arr[], int n) {
    printf("\n--- DANH SACH SINH VIEN ---\n");
    for (int i = 0; i < n; i++) {
        printf("Sinh vien thu %d:\n", i + 1);
        printf(" ID: %d\n", arr[i].id);
        printf(" Ten: %s\n", arr[i].name);
        printf(" Tuoi: %d\n", arr[i].age);
        printf(" SDT: %s\n", arr[i].phoneNumber);
        printf("--------------------\n");
    }
}

void insertion(struct Student arr[], int *n) {
    if (*n >= 50) {
        printf("Mang da day, khong the them!\n");
        return;
    }

    struct Student newStudent;
    printf("\n--- NHAP THONG TIN SINH VIEN MOI ---\n");

    printf("Nhap ID: ");
    scanf("%d", &newStudent.id);
    getchar(); 

    printf("Nhap Ten: ");
    fgets(newStudent.name, sizeof(newStudent.name), stdin);
    newStudent.name[strcspn(newStudent.name, "\n")] = '\0';

    printf("Nhap Tuoi: ");
    scanf("%d", &newStudent.age);
    getchar(); 

    printf("Nhap SDT: ");
    fgets(newStudent.phoneNumber, sizeof(newStudent.phoneNumber), stdin);
    newStudent.phoneNumber[strcspn(newStudent.phoneNumber, "\n")] = '\0';

    arr[*n] = newStudent;
    (*n)++; 
    printf("Da them thanh cong!\n");
}

int main() {
    struct Student students[50] = {
        {1, "Nguyyen Minh Hieu A", 18, "0901234567"},
        {2, "Tang Hieu Thanh", 18, "0912345678"},
        {3, "Phung Duy Dat", 18, "0987654321"},
        {4, "Nguyen Minh Tan", 18, "0999888777"},
        {5, "Vu Hoang Lan Anh", 17, "0955666777"}
    };

    int currentLength = 5;
    
    insertion(students, &currentLength);

    displayStudent(students, currentLength);

    return 0;
}



#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int age;
    float grade;
} Student;

void inputStudent(Student students[], int *n) {
    printf("Nhap so luong hoc sinh: ");
    scanf("%d", n);
    getchar(); 

    for (int i = 0; i < *n; i++) {
        printf("\n--- Hoc sinh %d ---\n", i + 1);

        printf("Nhap ten: ");
        fgets(students[i].name, 50, stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0';

        printf("Nhap tuoi: ");
        scanf("%d", &students[i].age);

        printf("Nhap diem trung binh: ");
        scanf("%f", &students[i].grade);

        getchar(); 
    }
}

void displayStudents(Student students[], int n) {
    if (n == 0) {
        printf("\nChua co du lieu!\n");
        return;
    }

    printf("\n===== DANH SACH HOC SINH =====\n");
    for (int i = 0; i < n; i++) {
        printf("Hoc sinh %d:\n", i + 1);
        printf("Ten: %s\n", students[i].name);
        printf("Tuoi: %d\n", students[i].age);
        printf("Diem TB: %.2f\n\n", students[i].grade);
    }
}

void calcAverageGrade(Student students[], int n) {
    if (n == 0) {
        printf("\nChua co du lieu!\n");
        return;
    }

    float sum = 0;
    for (int i = 0; i < n; i++) {
        sum += students[i].grade;
    }

    printf("\nDiem trung binh cua tat ca hoc sinh: %.2f\n", sum / n);
}

int main() {
    Student students[100];
    int n = 0;
    int choice;

    do {
        printf("\n===== MENU =====\n");
        printf("1. Nhap thong tin hoc sinh\n");
        printf("2. Hien thi thong tin hoc sinh\n");
        printf("3. Tinh diem trung binh tat ca hoc sinh\n");
        printf("4. Thoat\n");
        printf("Chon chuc nang: ");
        scanf("%d", &choice);
        getchar(); 


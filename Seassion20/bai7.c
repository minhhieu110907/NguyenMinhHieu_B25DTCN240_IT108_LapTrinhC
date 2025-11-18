#include<stdio.h>
#include<string.h>
struct Student {
	    int id;
		char name [50];
		int age;
		char phoneNumber [15];
	};
void deleteStudent(struct Student arr[], int *n) {
    int idToDelete;
    printf("\n--- XOA SINH VIEN ---\n");
    printf("Nhap ID sinh vien can xoa: ");
    scanf("%d", &idToDelete);

    for (int i = 0; i < *n; i++) {
        if (arr[i].id == idToDelete) {
            for (int j = i; j < *n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            (*n)--;
            printf("Da xoa thanh cong sinh vien ID %d!\n", idToDelete);
            return; 
        }
    }
    printf("Khong tim thay sinh vien co ID = %d\n", idToDelete);
}
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
int main(){
	struct Student students[50] = {
     {1, "Nguyen Minh Hieu", 18, "0901234567"},
        {2, "Tang Hieu Thanh", 18, "0912345678"},
        {3, "Phung Duy Dat", 18, "0987654321"},
        {4, "Nguyen Minh Tan", 18, "0999888777"},
        {5, "Vu Hoang Lan Anh", 17, "0955666777"}
    };
    int currentLength = 5;
    
    displayStudent(students, currentLength);
    deleteStudent(students, &currentLength);
    displayStudent(students, currentLength);

return 0;
}


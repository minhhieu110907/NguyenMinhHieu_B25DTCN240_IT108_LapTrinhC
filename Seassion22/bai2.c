#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    char phoneNumber[15];
    char email[50];
} Contact;

Contact contacts[100];   
int count = 0;          


void addContact() {
    printf("\n--- Them lien he moi ---\n");
    printf("Nhap ten: ");
    fflush(stdin);
    fgets(contacts[count].name, 50, stdin);
    contacts[count].name[strcspn(contacts[count].name, "\n")] = '\0';

    printf("Nhap so dien thoai: ");
    fgets(contacts[count].phoneNumber, 15, stdin);
    contacts[count].phoneNumber[strcspn(contacts[count].phoneNumber, "\n")] = '\0';

    printf("Nhap email: ");
    fgets(contacts[count].email, 50, stdin);
    contacts[count].email[strcspn(contacts[count].email, "\n")] = '\0';

    count++;
    printf("Them thanh cong!\n");
}

void displayContacts() {
    printf("\n--- Danh sach lien he ---\n");
    if (count == 0) {
        printf("Danh ba rong!\n");
        return;
    }

    for (int i = 0; i < count; i++) {


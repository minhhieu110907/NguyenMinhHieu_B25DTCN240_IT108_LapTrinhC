#include <stdio.h>

void insertElement(int a[], int *n, int value, int pos) {
    for (int i = *n; i > pos; i--) {
        a[i] = a[i - 1];
    }

    a[pos] = value;   
    (*n)++;           
}

void printArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main() {
    int a[100] = {1, 2, 3, 4, 5};   
    int n = 5;                     

    printf("Mang ban dau: ");
    printArray(a, n);

    int value = 99; 
    int pos = 2;     

    insertElement(a, &n, value, pos);

    printf("Mang sau khi chen: ");
    printArray(a, n);

    return 0;
}


#include <stdio.h>#include <stdio.h>

int n = 5; 
void deleteElement(int a[], int pos) {
    for (int i = pos; i < n - 1; i++) {
        a[i] = a[i + 1];
    }
    n--;
}

void printArray(int *a) {
	int *p = a;
    for (int i = 0; i < n; i++) {
        printf("%d ", *p);
        p++;
    }
    printf("\n");
}

int main() {
    int a[100] = {10, 20, 30, 40, 50};  

    printf("Mang ban dau: ");
    printArray(a);

    int pos = 2;  
    deleteElement(a, pos);

    printf("Mang sau khi xoa: ");
    printArray(a);

    return 0;
}


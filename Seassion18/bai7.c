#include <stdio.h>
void sortArray(int a[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}


void printArray(int a[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main() {
   
    int arr[] = {64, 34, 25, 12, 22, 11, 90, 5};
  
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Mang ban dau:\n");
    printArray(arr, n);

  
    sortArray(arr, n);

   
    printf("\nMang sau khi sap xep:\n");
    printArray(arr, n);

    return 0;
}

#include <stdio.h>
#include <string.h>

#define MAX 1000

void swap(char *s1, char *s2) {
    char temp[MAX];
    strcpy(temp, s1);
    strcpy(s1, s2);
    strcpy(s2, temp);
}

void reverseStringFunction(char *input, char *reverse) {
    int len = strlen(input);
    char *p = input + len - 1; 
    char *q = reverse;          

    while (p >= input) {
        *q = *p;
        p--;
        q++;
    }
    *q = '\0'; 
}

int main() {
    char inputString[MAX];
    char reverseString[MAX];

    printf("Nhap chuoi: ");
    fgets(inputString, MAX, stdin);
    inputString[strcspn(inputString, "\n")] = '\0';

    reverseStringFunction(inputString,reverseString);
    
    char swapA[MAX], swapB[MAX];
    strcpy(swapA, inputString);
    strcpy(swapB, reverseString);
    swap(swapA, swapB);

    printf("Chuoi ban nhap:  %s\n", inputString);
    printf("Chuoi dao nguoc: %s\n", reverseString);
    printf("Sau khi swap:\n");
    printf("swapA: %s\n", swapA);
    printf("swapB: %s\n", swapB);

    return 0;
}


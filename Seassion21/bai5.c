#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    float price;
    int quantity;
} Product;

int main() {
    Product products[5];
    float totalValue = 0;

    for (int i = 0; i < 5; i++) {
        printf("\nNhap thong tin san pham %d:\n", i + 1);

        printf("Ten san pham: ");
        fflush(stdin);
        fgets(products[i].name, 50, stdin);
        products[i].name[strcspn(products[i].name, "\n")] = '\0';

        printf("Gia san pham: ");
        scanf("%f", &products[i].price);

        printf("So luong san pham: ");
        scanf("%d", &products[i].quantity);

        totalValue += products[i].price * products[i].quantity;

        getchar();
    }

    printf("\nTong gia tri tat ca san pham: %.2f\n", totalValue);

    return 0;
}


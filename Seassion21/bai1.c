#include<stdio.h>
typedef struct {
	char model [20];
	int year;
	float price;
}Car ;
int main(){
	Car number_1 = {"Toyota",2000,20500};
	Car number_2 = {"Audi",2025,1000000};
	printf("Ten cua xe 1 la: %s\n",number_1.model);
	printf("Nam san xuat cua xe 1 la: %d\n",number_1.year);
	printf("Gia cua xe 1 la: %.2f\n",number_1.price);
	printf("Ten cua xe 2 la: %s\n",number_2.model);
	printf("Nam san xuat cua xe 2 la: %d\n",number_2.year);
	printf("Gia cua xe 2 la: %.2f\n",number_2.price);
	
	
	



return 0;
}


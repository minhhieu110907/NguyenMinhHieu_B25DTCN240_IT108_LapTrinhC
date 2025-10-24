#include<stdio.h>

int main(){
	int so_nguoi_nhap;
	int so_bi_mat = 7;
	
	do {
		printf("Moi ban nhap vao so nguyen (tu 1-100): ");
	    scanf("%d",&so_nguoi_nhap);
	} while (so_nguoi_nhap != so_bi_mat);
	
	printf("Chuc mung, ban da doan dung!");
	
	
return 0;
}


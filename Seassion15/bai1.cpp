#include<stdio.h>
int difference ( int a,int b){
	return a-b;
}
int product ( int a, int b){
	return a * b;
}
int main(){
	int c,d;
	printf("Nhap vao 2 so nguyen: ");
	scanf("%d%d",&c,&d);
	printf("Hieu 2 so la:%d",difference(c,d));
	printf("\nTich 2 so la:%d",product(c,d));


return 0;
}


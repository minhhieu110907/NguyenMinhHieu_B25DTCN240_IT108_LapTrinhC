#include<stdio.h>
int reserve ( int n){
	int reserveNumber= 0,figure;
	while ( n != 0){
		figure = n %10;
	    reserveNumber =reserveNumber *10 + figure;
	    n /=10;
	}
	return reserveNumber;
}
int main(){
	int a;
	printf("Nhap vao so nguyen: ");
	scanf("%d",&a);
	printf("So dao nguoc cua %d la %d",a,reserve(a));


return 0;
}


#include<stdio.h>
int sumNumber ( int n){
	int sum = 0;
	while ( n != 0){
	sum += n%10;
	n/=10;
    }
	return sum;
}
int main(){
	int a;
	printf("Nhap vao 1 so nguyen: ");
	scanf("%d",&a);
	printf("Tong cac chu so la: %d ",sumNumber(a));


return 0;
}


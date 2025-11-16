#include<stdio.h>
void swap ( int *a,int *b){
int temp = *a;
*a = *b;
*b = temp;
}

int main(){
	int a,b;
	printf("Nhap vao 2 so nguyen a b: ");
	scanf("%d%d",&a,&b);
	printf("Hai so truoc khi doi cho: %d %d",a,b);
	
	swap(&a,&b);
	printf("\nHai so sau khi doi cho: %d %d",a,b);	
	
	



return 0;
}


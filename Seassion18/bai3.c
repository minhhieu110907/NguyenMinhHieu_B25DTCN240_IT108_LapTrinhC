#include<stdio.h>
int sum ( int *a,int *b){
return *a + *b;;
}
int main(){
	int x,y;
	printf("Nhap 2 so: ");
	scanf("%d%d",&x,&y);
	
	int result = sum(&x,&y);
	printf("Tong 2 so la: %d",result);



return 0;
}


#include<stdio.h>
int plus ( int a,int b){
return a + b;
}
int main(){
	int x , y;
	printf("Nhap hai so: ");
	scanf("%d%d",&x,&y);
	
	printf("Tong cua hai so la: ");
	int hello = plus ( x,y);
	printf("%d",hello);


return 0;
}


#include<stdio.h>
int main(){
	int sophantu, i = 0;
	int a[i];
	printf("Moi ban nhap vao so phan tu cua mang: ");
	scanf("%d",&sophantu);
	
	for( int i =0 ; i < sophantu; i++){
		printf("Moi ban nhap vao phan tu thu %d: ",i);
		scanf("%d",&a[i]);
	}
	for ( int i = 0; i < sophantu;i++){
		printf("%d ",a[i]);
	}


return 0;
}


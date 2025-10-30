#include<stdio.h>
int main(){
	int n;
	printf("Moi ban nhap vao so nguyen: ");
	scanf("%d",&n);
	
	int matrix[n][n];
	for(int i =0; i < n;i++){
		for(int j =0; j < n;j++){
			printf("Nhap vao phan tu matrix[%d][%d]: ",i,j);
			scanf("%d",&matrix[i][j]);
			
		}
	}
	printf("\n");
	printf("----------Ma tran hinh vuong ban vua nhap----------\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d\t",matrix[i][j]);
		}
		printf("\n");
	}

return 0;
}


#include<stdio.h>
int main(){
  int rows, cols;
    
    printf("Nhap so hang: ");
    scanf("%d", &rows);

    printf("Nhap so cot: ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    printf("\n--- Nhap cac phan tu cho ma tran ---\n");
    
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Nhap phan tu matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Hang dau tien trong ma tran la: ");
    for( int i =0;i<1;i++){
        for ( int j = 0;j<cols;j++){
    	   printf("%d ",matrix [i][j]);
	}
}
    printf("\n");
    printf("Hang cuoi trong ma tran la: ");
    for ( int i= rows-1;i<rows;i++){
    	for(int j=0;j<cols;j++){
    		printf("%d ",matrix[i][j]);
		}
	}
	printf("\n");
	printf("Cot dau tien trong ma tran la: ");
	for( int i =0; i< rows;i++){
		for ( int j = 0; j< 1; j++ ){
		printf("%d ",matrix[i][j]);
	    }
	}
	printf("\n");
	printf("Cot cuoi trong ma tran la: ");
	for(int i =0; i<rows;i++){
		for(int j = cols-1;j<cols;j++ ){
			printf("%d ",matrix[i][j]);
		}
	}

return 0;
}

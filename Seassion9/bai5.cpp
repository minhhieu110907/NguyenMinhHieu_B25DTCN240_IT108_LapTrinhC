#include<stdio.h>
int main(){
  int rows, cols,sum=0,sum1=0,sum2=0,sum3=0;
    
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
    printf("Tong hang dau tien trong ma tran la: ");
    for( int i =0;i<1;i++){
        for ( int j = 0;j<cols;j++){
           sum+=matrix[i][j];
	}
}
    printf("%d ",sum);
    printf("\n");
    printf("Tong hang cuoi trong ma tran la: ");
    for ( int i= rows-1;i<rows;i++){
    	for(int j=0;j<cols;j++){
    		sum1+=matrix[i][j];
		}
	}
	printf("%d ",sum1);
	printf("\n");
	printf("Tong cot dau tien trong ma tran la: ");
	for( int i =0; i< rows;i++){
		for ( int j = 0; j< 1; j++ ){
		   sum2+=matrix[i][j];
	    }
	}
	printf("%d ",sum2);
	printf("\n");
	printf("Tong cot cuoi trong ma tran la: ");
	for(int i =0; i<rows;i++){
		for(int j = cols-1;j<cols;j++ ){
			sum3+=matrix[i][j];
		}
	}
	printf("%d ",sum3);

return 0;
}


#include<stdio.h>
int main(){
	int matrix[2][2]={{10,9},{15,1000}};
	int max = matrix [0][0];
	printf("Mang 2 x 2 ta co\n");
	for (int i = 0; i< 2;i++){
		for( int j =0;j<2;j++){
			printf("%d\t",matrix[i][j]);
	   }
	   printf("\n");
    }
	
	printf("Phan tu lon nhat trong mang la: ");
	
	for (int i = 0; i< 2;i++){
		for( int j =0;j<2;j++){
			if(matrix[i][j]>max){
				max= matrix[i][j];
				
			}
		}
	}
	printf("%d",max);

return 0;
}


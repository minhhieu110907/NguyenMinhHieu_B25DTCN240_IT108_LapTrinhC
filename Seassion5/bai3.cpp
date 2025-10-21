#include<stdio.h>
int main(){
   float diemtrungbinh;
   printf("Moi ban nhap vao diem trung binh:");
   scanf("%f",&diemtrungbinh);
   
   if ( diemtrungbinh >= 8) {
   	printf( "Hoc luc gioi");
   	
   } else if (diemtrungbinh >= 6.5) {
   	printf("Hoc luc kha");
	
   
   
   
   } else if ( diemtrungbinh >= 5) {
   	printf("Hoc luc trung binh");
   	
   } else 
    printf("Hoc luc yeu");
   	
   	
	

return 0;
}


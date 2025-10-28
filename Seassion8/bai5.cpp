#include<stdio.h>
int main(){
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int max = a[0], min = a[0];
	for(int i=0;i<10;i++){
		if (a[i]>max){
			max= a[i];
	   } else {
	   	    min = a[i];
	   }
	
   }
   printf("So lon nhat la: %d\n",max);
   printf("So nho nhat la: %d",min);

return 0;
}


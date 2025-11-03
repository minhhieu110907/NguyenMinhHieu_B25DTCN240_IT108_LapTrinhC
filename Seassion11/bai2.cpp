#include<stdio.h>
void bubbleSort(int a[], int n){
	int temp,change = 0;
	for ( int i = 0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				change =1;
			}
		}
		if (change == 0){
		break;
	}
	}
}
int main(){
     int a[]={21,24,12,15,65,19,64,10,57};
     int n = sizeof(a)/sizeof(int);
     printf("Mang cua ban la: ");
     for(int i =0;i<n;i++){
     printf("%d ",a[i]);
    }
    printf("\n");
    
    printf("Mang sau khi sap xep la: ");
    bubbleSort(a,n);
    for(int i =0;i<n;i++){
    	printf("%d ",a[i]);
	}



return 0;
}


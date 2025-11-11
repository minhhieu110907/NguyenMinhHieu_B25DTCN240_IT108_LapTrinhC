#include<stdio.h>
int fre ( int a[],int n){
	int mincount=n;
	for ( int i =0;i<n;i++){
		int currentcount =0;
		for ( int j =0 ; j<n;j++){
			if (a[j]==a[i]){
				currentcount++;
			}	
		}
		if ( currentcount <mincount){
			mincount = currentcount;
		}
	}
	return mincount;
}
void deleteElement (int a[],int n){
	int mincount = fre(a,n);
	printf("\nPhan tu xuat hien it nhat la: ");
    for ( int i =0;i<n;i++){
		int currentcount =0;
		for ( int j =0 ; j<n;j++){
			if (a[j]==a[i]){
				currentcount++;
			}	
		}
		if ( currentcount == mincount){
			int flag = 0;
			for ( int h =0;h<i;h++){
				if (a[h]==a[i]){
					flag =1;
					break;
				}
			}
			if ( flag == 0){
				printf ("%d ",a[i]);
			}
		}
    }
}
int main(){
	int n;
	printf("Nhap so phan tu: ");
	scanf("%d",&n);
	
	int a[n];
	for ( int i = 0;i<n;i++){
		printf("Nhap phan tu a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	
	printf("Mang cua ban la: ");
	for ( int i =0;i<n;i++){
		printf("%d ",a[i]);
	}	
	deleteElement(a,n);


return 0;
}


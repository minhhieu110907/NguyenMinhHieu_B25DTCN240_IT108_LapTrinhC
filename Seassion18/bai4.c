#include<stdio.h>
void putArray(int *a,int n){
  printf("Mang cua ban la: ");
    int *p = a;
    for (int i = 0; i < n; i++) {
        printf("%d ", *p);
        p++;
    }
}
int main(){
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d",&n);
    
    int a[n];
    for ( int i =0;i<n;i++){
    	printf("Moi nhap vao phan tu a[%d]: ",i);
    	scanf("%d",&a[i]);
	}
	putArray(a,n);
	


return 0;
}


#include<stdio.h>
void putArray ( int a[], int n){
    for ( int i =0;i<n;i++){
        printf("Moi ban nhap vao phan tu a[%d]: ",i);
        scanf("%d",&a[i]);
    }
}
int MAX(int a[], int n){
    int max = a[0];
    for ( int i =1;i<n;i++){
        if ( a[i]>max){
            max = a[i];
        }
    }
    return max;
}
int main(){
    int n;
    printf("Moi nhap so phan tu: ");
    scanf("%d",&n);
    
    int a[n];
    putArray(a,n);
    int max = MAX(a,n);
    printf("Gia tri lon nhat trong mang la: %d",max);
    return 0;
}
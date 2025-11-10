#include<stdio.h>
void putArray ( int a[], int n){
    for ( int i =0;i<n;i++){
        printf("Moi ban nhap vao phan tu a[%d]: ",i);
        scanf("%d",&a[i]);
    }
}
void gcd ( int a,int b){
    while ( a!=b){
        if ( a>b){
            a-=b;
        } else {
            b-=a;
        }
    }
    printf("Uoc chung lon nhat la: %d",a);
}
int main(){
    int n;
    printf("Moi nhap so phan tu: ");
    scanf("%d",&n);
    
    int a[n];
    putArray(a,n);
    
    int x = a[0];
    for ( int i =1;i<n;i++){
        gcd(x,a[i]);
        x = a[i];
    }
    return 0;
}
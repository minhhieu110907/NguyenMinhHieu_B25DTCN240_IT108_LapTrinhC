#include<stdio.h>
void isPrime ( int n){
    if ( n<2){
        printf("%d khong phai la so nguyen to",n);
        return;
    }
    for ( int i =2;i*i<=n;i++){
        if ( n%i==0){
            printf("%d khong phai la so nguyen to",n);
            return;
        }
    }
    printf("%d la so nguyen to",n);
}
int main(){
    int n;
    printf("Moi ban nhap vao mot so nguyen: ");
    scanf("%d",&n);
    isPrime(n);
    return 0;
}
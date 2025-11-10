#include<stdio.h>
void isPerfectNumber ( int n){
    int sum =0;
    for ( int i =1;i<=n/2;i++){
        if ( n%i==0){
            sum +=i;
        }
    }
    if ( sum == n){
        printf("%d la so hoan hao\n",n);
    } else {
        printf("%d khong phai la so hoan hao\n",n);
    }
}
int main(){
    int a,b;
    printf("Moi ban nhap vao hai so nguyen: ");
    scanf("%d%d",&a,&b);
    isPerfectNumber(a);
    isPerfectNumber(b);
    return 0;
}
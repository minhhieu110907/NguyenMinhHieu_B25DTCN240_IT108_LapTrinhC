#include<stdio.h>
int main () {
int so_dien;
printf("Moi ban nhap vao so dien trong thang: ");
scanf( "%d" , &so_dien);
if ( 0 <= so_dien && so_dien < 50 ) {
    printf("So tien dien phai tra la: %d VND\n", so_dien * 10000);
} else if ( 50 <= so_dien && so_dien < 100 ) {
    printf("So tien dien phai tra la: %d VND\n", 50 * 1000 + (so_dien - 50) * 15000);
} else if ( 100 <= so_dien && so_dien < 150 ) {
    printf("So tien dien phai tra la: %d VND\n", 50 * 10000 + 50 * 15000 + (so_dien - 100) * 20000 );
} else if ( 150 <= so_dien && so_dien < 200 ){
    printf("So tien dien phai tra la: %d VND\n", 50 * 10000 + 50 * 15000 + 50 * 20000 + (so_dien - 150) * 25000);
} else if ( 200 <= so_dien ) {
    printf("So tien dien phai tra la: %d VND\n", 50 * 10000 + 50 * 15000 + 50 * 20000 + 50 * 25000 + (so_dien - 200) * 30000);


} else {
    printf("So dien khong hop le\n");

}
return 0;
}

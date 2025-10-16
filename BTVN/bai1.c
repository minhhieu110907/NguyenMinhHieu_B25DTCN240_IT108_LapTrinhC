#include<stdio.h>

int main(){ 

//so nguyen nho
short tuoi = 18; 
//so nguyen thong thuong
int soluong = 2000;
//so nguyen lon
long soto = 123456789;
//so nguyen rat lon
long long sosieu = 123456789012345;
//so nguyen khong dau nho
unsigned short nam = 2024;
//so nguyen khong dau thuong
unsigned int luong = 15000;
//so nguyen khong dau lon
unsigned long sodaivua = 1234567890;
//so nguyen khong dau rat lon  
unsigned long long sosieudai = 12345678901234567890;

//ky tu don
char chucai = 'A';


printf("Nam nay ban Nam co so tuoi la: %d\n", tuoi);
printf("So luong la: %d\n", soluong);
printf("So to la: %ld\n", soto);
printf("So sieu lon la: %lld\n", sosieu);


printf("Nam ngoai la: %hu\n", nam);
printf("Luong thang nay la: %u\n", luong);
printf("Pass wifi la: %lu\n", sodaivua);
printf("So to nhat the gioi: %llu\n", sosieudai);

printf(" Chu cai dau tien trong bang chu cai la: %c\n", chucai);
return 0;
}

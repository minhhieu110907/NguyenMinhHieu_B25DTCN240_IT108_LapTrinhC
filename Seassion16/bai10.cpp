#include<stdio.h>
#include<string.h>
#define MAX 1000
int main(){
   int fre[256]={0},printed[256]={0};
   char str [MAX];
   printf("Nhap chuoi: ");
   fgets(str,MAX,stdin);
   str[strcspn(str,"\n")]= '\0';
   
   printf("Chuoi ban vua nhap la: ");
   fputs(str,stdout);
   printf("\n");
   
   int len = strlen(str);
   for ( int i =0;i<len;i++){
   	  unsigned char character = str[i];
   	  fre[character]++;
   }
   for ( int i = 0;i<len;i++){
   	unsigned char character = str[i];
   	if(fre[character]>0 && printed[character] == 0){
   		printf("%c: %d\n",character,fre[character]);
   		printed[character] = 1;
	   }
   }


return 0;
}



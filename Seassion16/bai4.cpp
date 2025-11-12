#include<stdio.h>
#include<string.h>
#define MAX 1000
int main(){
   char str [MAX],character;
   int count = 0;
   printf("Nhap chuoi: ");
   fgets(str,MAX,stdin);
   str[strcspn(str,"\n")]= '\0';
   
   printf("Nhap ki tu can tim: ");
   scanf("%c",&character); 
   
   for ( int i =0;i<strlen(str);i++){
   	if (str[i]==character){
   		count++;
	   }
   }
   printf("Ki tu %c xuat hien %d lan",character,count);
     
   
   


return 0;
}


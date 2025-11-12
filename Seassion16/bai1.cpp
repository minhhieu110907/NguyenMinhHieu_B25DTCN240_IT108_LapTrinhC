#include<stdio.h>
#include<string.h>
int main(){
	char str [50];
	printf("Moi ban nhap chuoi: ");
	fgets(str,50,stdin);
	str[strcspn(str,"\n")]='\0';
	fputs(str,stdout);

return 0;
}


#include<stdio.h>
#include<string.h>
#define MAX 1000
int main(){
	char str[MAX];
	printf("Moi ban nhap vao chuoi: ");
	
	fgets(str,MAX,stdin);
	str[strcspn(str,"\n")]='\0';
	
	for ( int i =0; i<strlen(str);i++){
		printf("%c ",str[i]);
	}
return 0;
}


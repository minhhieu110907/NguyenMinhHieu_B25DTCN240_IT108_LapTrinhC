#include<stdio.h>
#include<string.h>
#define MAX 1000
int main(){
	char str [MAX];
	printf("Moi ban nhap vao chuoi: ");
	fgets(str,MAX,stdin);
	str[strcspn(str,"\n")] = '\0';
	
	for ( int i = strlen(str)-1;i>=0;i--){
		printf("%c ",str[i]);
	}
	


return 0;
}


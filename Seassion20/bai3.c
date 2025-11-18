#include<stdio.h>
int main(){
	struct Student {
		int id;
		char name[50];
		int age;
    };
	struct Student menu[5];
	for ( int i =0;i<5;i++){
		printf("menu[%d]-id: ",i);
		scanf("%d",&menu[i].id);
		fflush(stdin);
		
		printf("menu[%d]-Ho va ten: ",i);
		fgets(menu[i].name,50,stdin);
		menu[i].name[strcspn(menu[i].name,"\n")]='\0';
		
		printf("menu[%d]-Tuoi: ",i);
		scanf("%d",&menu[i].age);
		fflush(stdin);
	}
	printf("\n");
	printf("-----Tong hop thong tin-----");	
		for ( int i = 0;i < 2;i++){
			printf("menu[%d]-id: %d\n",i,menu[i].id);
			printf("menu[%d]-Ho va ten: %s\n",i,menu[i].name);
			printf("menu[%d]-Tuoi: %d\n",i,menu[i].age);
		}



return 0;
}


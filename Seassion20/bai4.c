#include<stdio.h>
#include<string.h>
struct Student {
	    int id;
		char name [50];
		int age;
		char phoneNumber [15];
	};
int main(){
	struct Student student[50];
	int n = 5;
	for ( int i =0;i<n;i++){
		student[i].id=i+1;
		printf("student[%d]-Ho va ten: ",i);
		fgets(student[i].name,50,stdin);
		student[i].name[strcspn(student[i].name,"\n")]='\0';
		
		printf("student[%d]-Tuoi: ",i);
		scanf("%d",&student[i].age);
		fflush(stdin);
		
		printf("student[%d]-So dien thoai: ",i);
		fgets(student[i].phoneNumber,15,stdin);
		student[i].phoneNumber[strcspn(student[i].phoneNumber,"\n")]='\0';
	}
	printf("\n");
	printf("------Thong tin hoc sinh-----\n");
	for ( int i =0;i<n;i++){
		printf("student[%d]-Ho va ten:%s\n",i,student[i].name);
		printf("student[%d]-Tuoi:%d\n",i,student[i].age);
		printf("student[%d]-So dien thoai:%s\n",i,student[i].phoneNumber);
	}



return 0;
}


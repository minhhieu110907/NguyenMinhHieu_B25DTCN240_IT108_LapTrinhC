#include<stdio.h>
int main(){
	typedef struct { 
	char name [50];
	int age;
	char phoneNumber [12];
	} Student;
	Student student;
	printf("Nhap ten: ");
	fgets(student.name,50,stdin);
	student.name[strcspn(student.name,"\n")]='\0';
	
	printf("Nhap tuoi: ");
	scanf("%d",&student.age);
	fflush(stdin);
	
	printf("Nhap so dien thoai: ");
	fgets(student.phoneNumber,12,stdin);
	student.phoneNumber[strcspn(student.phoneNumber,"\n")]='\0';
	printf("\n");
	
	printf("Ten: %s\n",student.name);
	printf("Tuoi: %d\n",student.age);
	printf("So dien thoai: %s",student.phoneNumber);
	



return 0;
}


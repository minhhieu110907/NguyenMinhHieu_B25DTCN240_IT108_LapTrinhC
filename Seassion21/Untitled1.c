#include<stdio.h>
#include<string.h>
typedef struct {
	char title[100];
	char author[50];
	float price;
}Book;
Book books[3];
void input_list(Book *books, int n){
	for ( int i =0;i<n;i++){
		printf("books[%d]-Tieu de: ",i);
		fgets(books[i].title,100,stdin);
		books[i].title[strcspn(books[i].title,"\n")]='\0';
		
		printf("book[%d]-Tac gia: ",i);
		fgets(books[i].author,50,stdin);
		books[i].author[strcspn(books[i].author,"\n")] = '\0';
		
		printf("book[%d]-Gia: ",i);
		scanf("%f",&books[i].price);
		getchar();
	}
}
void display_list(Book arr[],int n){
	printf("\n-----Thong tin ve sach-----\n");
	for (int i = 0; i < n; i++) {
        printf("Sach thu %d:\n", i + 1);
        printf(" Tieu de sach: %s\n", arr[i].title);
        printf(" Gia: %s\n", arr[i].price);
        printf("--------------------\n");
    }
}
int main(){
	int n = 3;
	input_list(books,n);
	display_list(books,n);
	
	
	



return 0;
}


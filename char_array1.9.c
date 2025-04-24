#include <stdio.h>
#include <stdlib.h>

//fgets Kullanımı ve Karakter Dizisi
//fgets Usage and Character Array 

int main(){
    char book_name[50],author_name[50],book_type[50];
	printf("Enter Book Name: ");
    fgets(book_name,sizeof(book_name),stdin);  
	
	printf("Enter Author Name: ");
	fgets(author_name,sizeof(author_name),stdin);
	
	printf("Enter Book Type: ");
	fgets(book_type,sizeof(book_type),stdin);
	
    printf("***** Book Information ***** \n");
	printf("Book Name: %sAuthor Name: %sBook Type: %s",book_name,author_name,book_type);

    return 0;
}
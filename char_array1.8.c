#include <stdio.h>
#include <stdlib.h>

// Program that prints the name and author of the book
// Kitap adını ve yazarını ekrana yazdıran program

int main(){
    const char book_name[40]="Mechatronics Engineering";
    const char author_name[40]="Engineer Mehmet";
	
    printf("Book Name: %s\n",book_name);
    printf("Author Name: %s\n",author_name);

    return 0;
}

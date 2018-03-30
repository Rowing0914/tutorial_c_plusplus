#include <iostream>
#include <cstring>

using namespace std;

struct Books {
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
};

int main(){
	struct Books book;

	strcpy(book.title, "this is it!!");
	strcpy(book.author, "Norio Kosaka");
	strcpy(book.subject, "C++ Programming");
	book.book_id = 19999;

	// Print book info
   cout << "Book title : " << book.title <<endl;
   cout << "Book author : " << book.author <<endl;
   cout << "Book subject : " << book.subject <<endl;
   cout << "Book id : " << book.book_id <<endl;

   return 0;
}
#include <iostream>
using namespace std;

/// template (blue print) for the opject
class Book {

    public:
        string title;
        string author;
        int pages;


};


int main()
{
    
    Book book1;
    book1.title = "Harry Potter";
    book1.author = "JK Rowling";
    book1.pages = 500;

    cout << book1.title;

    return 0;
}
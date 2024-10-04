#include <iostream>
using namespace std;

/// template (blue print) for the opject
class Book {

    public:
        string title;
        string author;
        int pages;

        ///constructor function
        Book(string name){

            cout << name << endl;
        }
};

///constructor is a function which is called when object is created
int main()
{
    
    Book book1("Harry Potter");
    book1.title = "Harry Potter";
    book1.author = "JK Rowling";
    book1.pages = 500;

    Book book2("Loard of the Rings");
    book2.title = "Lord of the Rings";
    book2.title = "Tolkein";
    book2.pages = 700;


    cout << book1.title;

    return 0;
}
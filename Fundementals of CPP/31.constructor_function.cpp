#include <iostream>
using namespace std;

/// template (blue print) for the opject
class Book {

    public:
        string title;
        string author;
        int pages;

        Book(){
            title = "No Title";
            author = "No author";
            pages = 0;
        }

        ///constructor function
        ///here a stands for argument
        Book(string aTitle, string aAuthor, int aPages){

            title = aTitle;
            author = aAuthor;
            pages = aPages;
        }

        ///you can even create multiple constructors
};

///constructor is a function which is called when object is created
int main()
{
    
    Book book1("Harry Potter","JK Rowling",500);

    ///then after even you can update attributes
    book1.title = "bla bla";

    Book book2("Loard of the Rings", "Tolkein",700);

    Book book3;

    cout << book3.title;

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    //endl: gives a new line \n:gives new line
    cout << "Giraffe Academy\n";
    cout << "Hello" << endl;
                    
    string phrase = "Giraffe Academy";
    cout << phrase.length(); //string functions
    //how many characters in the string

    cout << phrase[2];//Accessing indiviudual characters
    
    //modify specfici character in string
    phrase[0] = 'B';
    cout << phrase;

    cout << phrase.find("Academy", 0);
    //we can give string or character here
    //strating position of Academy

    //substring
    cout <<phrase.substr(8, 3);
    //strating postion , number of cahracter
    //strating index, length

    string phrasesub;
    phrasesub = phrase.substr(8, 3);
    cout << phrasesub;

    return 0;

}
#include <iostream>

using namespace std;

int main()

{
    //store the input varaible
    int age;

    cout << "Enter your age: ";

    //getting input
    cin >> age;   //store the input to the age varaible

    cout << "You are " << age << " years old" << endl;

    string name;
    cout << "Enter your name: ";
    getline(cin, name); //gives a entire line for the input
    
    cout << "Hello" << name;


    return 0;
}
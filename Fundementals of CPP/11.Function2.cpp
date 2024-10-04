#include <iostream>

using namespace std;

///creating another function
/// 1.Defining return type - void (does not retuin anything)

void sayHi(string Name, int age);
///Define functions above the main fucntion
/// can create the function here like thhis and define below
int main()
{
    cout << "Top" << endl;
    sayHi("Mike", 60) ;
    cout << "bottom"<< endl;
    sayHi("Tom", 60) ;

    return 0;


}


void sayHi(string Name, int age)
{
    cout << "Hello " << Name << " you sre " << age << endl;

}
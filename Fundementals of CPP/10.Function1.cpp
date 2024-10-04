#include <iostream>

using namespace std;

///creating another function
/// 1.Defining return type - void (does not retuin anything)

void sayHi(string Name, int age)
{
    cout << "Hello User " << Name << " you sre " << age << endl;

}

int main()
{
    cout << "Top" << endl;
    sayHi("Mike", 60) ;
    cout << "bottom"<< endl;
    sayHi("Tom", 60) ;

    return 0;


}
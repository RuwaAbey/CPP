#include <iostream>

using namespace std;

///creating another function
/// 1.Defining return type - void (does not retuin anything)

void sayHi()
{
    cout << "Hello User" << endl;

}

int main()
{
    cout << "Top" << endl;
    sayHi() ;
    cout << "bottom"<< endl;

    return 0;


}
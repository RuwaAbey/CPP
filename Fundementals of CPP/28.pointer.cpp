#include <iostream>
using namespace std;
 
 /*
 
 Pointers are memmory addreses

 
 
 
 */

int main()
{
    
    int age = 19;

    ///creating pointer variable

    int *pAge = &age;

    double gpa = 2.7;
    double *pGpa = &gpa;

    string name = "Mike";
    string *pName = &name;

    cout << &age << endl; ///memmory addreess where 19 is stored
    ///&age is a pointer
    ///special word used for memmroy addresss

    ///demostratio for pointers

    cout << "Age: " << &age << endl;
    cout << "Gpa: " << &gpa << endl;
    cout << "Name: " << &name << endl;

    cout << pAge;

    ///deferencing a pointer
    cout << *pAge << endl;

    int num;

    int *pNum = &num;
    cout << pNum << endl;
    cout << *pNum;

    ///dereferencing a pointer
    cout << *&gpa;

    return 0;
}
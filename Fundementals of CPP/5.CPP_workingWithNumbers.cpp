#include <iostream>
#include <cmath> //math functions in cpp

using namespace std;

int main()
{
    //Numbbers
    /// --->1.Whole Numbers --> int
    /// --->2.Decimal numbers
    ///            --->float
    ///            --->double

    cout << 40; //just ype out the number

    //math oiperation
    cout << 5+7; //Addition
    cout << 5*7; //Multipication
    cout << 5/7; //Division
    cout << 5-7; //Substraction
    cout << 5%7; //Remainder

    //1.Whole numbers
    //multipation and division come before adddition and subtraction
    cout << 4 + 5 * 10; //basic mathematical order of operation

    //to get addition first
    cout << (4+5) * 10;

    //store numbers in varables
    int wnum = 5;
    double dnum = 5.5;

    wnum++; //adding one to wnum
    wnum--;
    wnum += 80;//add 80 to it

    cout << wnum;

    //2.Decimal Numbers
    //int wnum = 5;
    //double num = 5.5;

    cout << 5.5 + 9; //Adding a decimal number to whole number

    cout << 10/3; //integer number is the result
    cout << 10/3.0; //decimal number can get

    //operation between integers give integers
    //operations between integers and decimal gives decimal

    cout << pow(2,5); //power 2 raised to 5 power
    cout << sqrt(36);
    //can you this for boh decimal and whole numbers

    cout << round(4.6);

    cout << ceil(4.1); //round the number to next highest number

    cout <<floor(4.8); //round yo small number

    cout << fmax(10,3);

    cout << fmin(10,3);


    return 0;
}


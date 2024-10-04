#include <iostream>
using namespace std;

int getMax(int num1, int num2)
{
    int result;

    if(num1 > num2){
        return num1;

    }else{
        return num2;

    }
}

int main()
{
    cout << getMax(2,3);
    return 0;
}


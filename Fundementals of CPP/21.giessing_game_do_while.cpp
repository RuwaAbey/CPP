#include <iostream>
using namespace std;

int main()
{

    int secretNum = 7;
    int guess;

    do{
        
        cout << "Enter guess: ";
        cin >> guess;
    
    } while(guess != secretNum);

    cout << "You Win";

    return 0;
}
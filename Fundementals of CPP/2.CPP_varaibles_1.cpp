//Variable is a container which can store diffrent data
//we can store and manage piece of data

#include <iostream>

using namespace std;

int main(){

    string characterName = "John";//Container which can store string value
    int characterAge;            //Container to store character's age this has to stay as number here we use integer
    characterAge = 35;  //numbers does not need quatation marks
    cout << "There once was a man named " << characterName << endl; //Putting the vaaible characterName 
    cout << "He was " <<characterAge << " years old" << endl;
    characterName = "Mike"; //can modfiy the varables in different places
    cout << "He liked the name " << characterName << endl;
    cout << "Bus did not like being " << characterAge << endl;

    return 0;
  
}
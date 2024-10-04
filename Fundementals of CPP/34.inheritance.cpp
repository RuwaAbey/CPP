#include <iostream>
using namespace std;

class Chef{

    public:
        void makeChicken(){
            cout << "The chef makes chicken" << endl;
        }
        void makeSalad(){
            cout << "The chef makes slad" << endl;
        }
        void makeSpecialDish(){
            cout << "The chef makes bbq ribs" << endl;
        }
};

class ItalianChef : public Chef{
    ///this chef can also do anything normal chef does
    ///so we can inherit the chef class to this
    public:
    void makePasta(){
        cout << "The chef makes Pasta" << endl;
    }

    ///we can overtite the functions in normal chef
    void makeSpecialDish(){
            cout << "The chef makes chicken parm" << endl;
        }

};

int main()
{
    Chef chef;
    chef.makeChicken();
    chef.makeSpecialDish();

    ItalianChef italianChef;
    italianChef.makeChicken();
    italianChef.makeSpecialDish();

    return 0;

}
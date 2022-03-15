#include <iostream>
#include <iomanip>
using namespace std;

class Heater
{

    int temperature = 0;

public:
    Heater();
    void warmer(int);
    void cooler(int);

    void print()
    {

        cout << "new temperature is :" << temperature << endl;
    }
};

void Heater::warmer(int newtemp)
{

    newtemp = 5 + temperature;
    temperature = newtemp;
}

void Heater::cooler(int newcool)
{

    newcool = temperature - 5;
    temperature = newcool;
}

Heater::Heater() : temperature(15) {}

int main()

{
    int newtempp;
    int cooltempp;
    Heater h1;

    int option;
    while (option != 3)
    {

        cout << endl;

        cout << "enter the option which you want to select : ";
        cin >> option;

        cout << "press 1 for warmer" << endl;
        cout << "press 2 for cooler" << endl;
        cout << "press 3 to exit" << endl;

        switch (option)
        {
        case 1:
            h1.warmer(newtempp);
            h1.print();
            break;

        case 2:

            h1.cooler(cooltempp);
            h1.print();
            break;

        case 3:

            cout << "program is exiting!!" << endl;
            exit(1);

            break;

        default:
            cout << "please enter the correct option" << endl;
        }
    }

    return 0;
}
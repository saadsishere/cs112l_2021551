#include <iostream>
using namespace std;

class swapper
{
    int size;
    int a = 0;
    int b = 0;

public:
    void setter()
    {

        cout << "enter the value of a :";
        cin >> a;
        cout << "enter the value of b :";
        cin >> b;
    }

    // a=
    //

    // b=b-(a+b)
    // 6-(5+6)
    void swapvar()
    {
        a += b;
        b = a - b;
        a -=b;
    }

    void display()
    {

        cout << "the value of b is " << b << endl;
        cout << "the value of a is " << a << endl;
    }
};

int main()
{

    swapper s1;

    s1.setter();
    s1.swapvar();
    s1.display();

    return 0;
}
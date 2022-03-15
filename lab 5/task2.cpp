#include <iostream>
using namespace std;

class parity
{
    int size;

    int *arr;

public:
    parity()
    {
        size = 0;
        arr = new int[size];
    }
    ~parity()
    {

        cout << "destructor called :";
    }

    void put(int);
    void print(void);
    void del(int);
    int test(void);
};

void parity ::put(int num)
{
    size++;
    // cout << "enter the elements :";
    int *temp = new int[size];
    int i = 0;
    for (i; i < size - 1; i++)
    {

        temp[i] = arr[i];
    }

    temp[i] = num;
    delete[] arr;
    arr = temp;
    cout << endl;
}

void parity ::del(int num)
{
    size--;

    int *temp1 = new int[size];

    int i = 0;

    for (i; i < size; i++)
    {
        temp1[i] = arr[i];
    }
    delete[] arr;
    arr = temp1;
}

void parity::print(void)
{
    cout << "elements are :";
    for (int i = 0; i < size; i++)
    {

        cout << arr[i] << " ";
    }

    cout << endl;
}

int parity::test(void)
{

    if (size % 2 == 1)
    {

        return 0;
    }
    else
    {

        return 1;
    }
}

int main()
{
    int n, s = 1;
    parity p1;

    int option;

    while (option != 6)
    {

        cout << "press 1 to put an element :" << endl;
        cout << "press 2 to delete elements :" << endl;
        cout << "press 3 to show all elements :" << endl;
        cout << "press 4 to delete the last element :" << endl;
        cout << "press 5 to test :" << endl;
        cout << "press 6 to close program :" << endl;

        cout << "enter option : " << endl;

        cin >> option;

        switch (option)
        {
        case 1:
            cout << "enter the number :";
            cin >> n;
            p1.put(n);
            p1.print();
            break;

        case 2:
            p1.del(n);
            break;

        case 3:
            p1.print();
            break;

        case 4:

            p1.del(n);
            p1.print();
            break;

        case 5:
            cout << p1.test() << "\n\n";
            break;

        case 6:
            cout << "program exiting : ";
            exit(1);
        }
    }
    return 0;
}
#include <iostream>
using namespace std;

class twoDArray
{
private:
    const static int size = 2;
    int arr[size][size] = {{}, {}};
    // int temp[size][size];

public:
    void initalize()
    {
        // int arr[size][size];

        for (int i = 0; i < size; i++)
        {

            for (int j = 0; j < size; j++)
            {

                cin >> arr[i][j];
            }
        }

        // int temp[size][size] = {

        //     {1, 2},
        //     {3, 4}

        // };
    }

    void print()
    {

        for (int i = 0; i < size; i++)
        {

            for (int j = 0; j < size; j++)
            {

                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
    // 0,0=1  0,1=2  1,0=3  , 1,1=4
    // 0,0=1  0,1 =3 1,0=2    1,1=3

    void transpose()
    {
        int temp[size][size] = {{}, {}};

        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {

                temp[i][j] = arr[j][i]; // 0,1 becomes 1,0
            }
        }
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                arr[i][j] = temp[i][j];
            }
        }
    }

    void symmetric()
    {
        bool check = false;
        int temp[size][size] = {{}, {}};

        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {

                temp[i][j] = arr[j][i]; // 0,1 becomes 1,0
            }
        }

        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                if (arr[i][j] == temp[i][j])
                {
                    check = true;
                }

                else
                {

                    check = false;

                    break;
                }
            }
        }

        if (check)
        {
            cout << "symmetric" << endl;
        }
        else
        {
            cout << "not symmetric" << endl;
        }
    }

    void multiply()
    {




    }
};

int main()
{

    twoDArray b1;

    int option;

    while (option != 4)
    {
        cout << "press 1 to Transpose" << endl;
        cout << "press 2 to check if the matrix is symmetric or not" << endl;
        cout << "press 3 to multiply the arrays" << endl;
        cout << "press 4 to exit the program" << endl;

        cout << "enter the option which you want to run : ";
        cin >> option;
        cout << endl;

        cout << "enter the array elements :";

        b1.initalize();

        switch (option)
        {

        case 1:
            b1.transpose();
            b1.print();
            break;

        case 2:
            b1.symmetric();
            break;

        case 3:

            break;

        case 4:

            cout << "program exiting" << endl;
            exit(1);
            break;

        default:

            cout << "wrong option please try again" << endl;

            break;
        }
    }

    return 0;
}
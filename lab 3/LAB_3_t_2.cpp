#include <iostream>
using namespace std;

int main()
{
    int size;

    cout << "enter the size of the array" << endl;
    cin >> size;

    int *arr = new int[size];

    int *temp = new int[size];

    // int *temp1 = new int[size];

    cout << "enter the elements of the array " << endl;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {

        temp[i] = arr[i];
    }

    delete[] arr;

    int max = temp[0];

    for (int i = 0; i < size; i++)
    {

        if (temp[i] > max)
        {

            max = temp[i];
        }
    }

    int scnd_max = temp[0];

    for (int i = 0; i < size; i++)
    {

        if (temp[i] > scnd_max && temp[i] < max)

        {

            scnd_max = temp[i];
        }
    }

    int min = temp[0];

    for (int i = 0; i < size; i++)
    {

        if (temp[i] < min)
        {

            min = temp[i];
        }
    }

    int scnd_min = temp[0];

    for (int i = 0; i < size; i++)
    {

        if (temp[i] < scnd_min && temp[i] > min)

        {

            scnd_max = temp[i];
        }
    }

    cout << " second min is :" << scnd_max << endl;
    cout << "second max is:" << scnd_min << endl;

    // for (int i = 0; i < size - 1; i++)
    // {

    //     cout << max;
    // }

    return 0;
}
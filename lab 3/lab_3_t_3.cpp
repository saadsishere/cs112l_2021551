#include <iostream>
using namespace std;

int main()
{

    int size;

    cout << "enter the size of the array :";
    cin >> size;
    cout << endl;

    int *arr = new int[size];

    int *temp_neg = new int[size];

    int *temp_pov = new int[size];

    cout << "enter the elements of the array :" << endl;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // for (int i = 0; i < size; i++)
    // {
    //     temp[i] = arr[i];
    // }
    // delete arr;
    int l = 0;
    int k = 0;
    for (int i = 0; i < size; i++)
    {

        if (arr[i] <= 0)
        {
            temp_neg[k] = arr[i];
            k++;
        }

        else
        {

            temp_pov[l] = arr[i];
            l++;
        }
    }

    for (int i = 0; i <l; i++)

    {

        arr[i] = temp_pov[i];
    }

    for (int i = 0; i <= size - l; i++)
    {

        arr[l] = temp_neg[i];
        l++;
    }

    for (int i = 0; i < size; i++)
    {

        cout << arr[i]<<" ";
    }
delete []temp_neg;
delete []temp_pov;
delete[]arr;
    return 0;
}
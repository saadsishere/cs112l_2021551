#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "enter the size of the array" << endl;
    cin >> n;

    int *arr = new int[n];

    int *temp = new int[n + 1];

    cout << "enter the values" << endl;

    for (int i = 0; i < n; i++)
    {

        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {

        temp[i] = arr[i + 1] - arr[i];
    }
    delete[] arr;
    for (int i = 0; i < n-1; i++)
    {

        cout << temp[i] << " ";
    }
    delete[] temp;
    return 0;
}
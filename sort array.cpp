// sort array : This file contains the 'main' function. Program execution begins and ends there.
//Ali lashkari
#include <iostream>

using namespace std;

int arraySortedOrNot(int arr[], int n);

int main()
{
    int arr[10];
    int a;
    int b = 1;
    cout << "enter the num of element\n";
    cin >> a;
    for (int i = 0; i < a; i++,b++)
    {
        cout << "element " << b<<"\n";
        cin >> arr[i];
    }
    int n = sizeof(arr) / sizeof(arr[0]);
    if (arraySortedOrNot(arr, n))
        cout << "Yes\n";
    else
        cout << "No\n";
}

int arraySortedOrNot(int arr[], int n)
{

    if (n == 1 || n == 0)
        return 1;

    if (arr[n - 1] < arr[n - 2])
        return 0;

    return arraySortedOrNot(arr, n - 1);
}//Ali lashkari
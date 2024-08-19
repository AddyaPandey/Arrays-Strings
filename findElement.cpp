#include <iostream>
using namespace std;
int main()
{

    // 4
    // 5,77,2,61
    // find 2 in array

    // find if element X is present in array or not.

    int n; // size
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; // input the values
    }

    int x; // this is element x
    cin >> x;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            cout << "true";
            return 0; // compiler will stop after return 0
            cout << "addya";
        }
    }
    cout<<"false";
}
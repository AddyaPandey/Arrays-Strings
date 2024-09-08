#include <iostream>
#include <algorithm>
using namespace std;
void rotate_right(int arr[], int n)
{
    int save = arr[n - 1];

    for (int i = 0; i < n - 1; i++)
    {

        arr[i] = arr[i - 1];
    }
    arr[0] = save;

    int main()
    {
        int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        rotate_right(arr, n);
        // dont forget to verify
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }
}
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i <n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int candidate = arr[n / 2];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == candidate)
        {
            count++;
        }
    }
    if (count > (n / 2))
    {
        cout << candidate<<endl;
        return 0;
    }
    else
{
cout << "no majority element";
}
}
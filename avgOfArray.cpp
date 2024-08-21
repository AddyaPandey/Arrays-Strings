#include <iostream>
using namespace std;
int main()
{

    // input of size
    int n;
    cin >> n;
    int arr[n];

    // input of numbers
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // output of result
    int sum = 0;
    float avg;

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    avg = sum / n;
    cout << "average of all elements is:" << avg;
}
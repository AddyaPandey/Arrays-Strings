#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[] = {40, 30, 20, 10, 50};
int i;
int mx = arr[0];
    for (i = 0; i <= 5; i++)
    {
        if (arr[i] > mx)
        {
           mx = arr[i];
        }
    }
    cout << mx;
}
#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {

        cin >> arr[i];
    }
    int mx = arr[0];
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>mx){
            mx=arr[i];
        }
    }
    int second_max = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] != mx){

        if(arr[i]>second_max)
            second_max = arr[i];
        }
    }
}
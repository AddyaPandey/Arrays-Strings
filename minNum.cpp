#include <iostream>
using namespace std;
int main(){

// question- print the minimum element from the array
//eg. arr[3, 45, 9, 18]

int n;
cin>>n;
int arr[n];

//input
for(int i=0; i<n; i++)
{
    cin>>arr[i];
}
//output
int mn = arr[0];

for(int i=0; i<n; i++)
{
   if(arr[i]<mn){
    mn = arr[i];
   }
}
 cout<<mn;
}
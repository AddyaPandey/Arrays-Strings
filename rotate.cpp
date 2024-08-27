// rotate the array by 1 position on right
//input = 3,2,1,0 so our output will be 0,3,2,1

#include <iostream>
using namespace std;
int main(){

//input
int n;
cin>>n;
int arr[n];

for(int i=0; i<n; i++){
cin>>arr[i];
}

//output
int i;
for(i=0; i<n; i++){
    arr [i]++;
}
cout<<arr[i];
}
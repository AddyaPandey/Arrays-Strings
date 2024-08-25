#include<bits/stdc++.h>
using namespace std;

int main(){

   int arr[] = {40, 30, 20, 10, 50};
   
   for(int i=0; i<=5; i++){
    if (arr[i+1]<= arr[i]){
        cout<<arr[i+1];
    }
    else cout<<arr[i];
   }
}
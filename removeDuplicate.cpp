#include <bits/stdc++.h>
using namespace std;

string removeDuplicate(string s)
{
   // Used as count in the modified string
   int count = 0;   

   // Traverse
   for (int i = 0; i < s.size(); i++) {
       
     // Check if s[i] is present before it  
     int j; 
     for (j = 0; j < i; j++) 
        if (s[i] == s[j])
           break;
     
     // If not present, then add it to result
     if (j == i)
        s[count++] = s[i];
   }
   
   // Resize the string to remove extra characters
   s.resize(count);
   
   return s;
}

// Driver code
int main()
{
   string s = "geeksforgeeks";
   cout << removeDuplicate(s);
   return 0;
}

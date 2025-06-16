#include <bits/stdc++.h>
using namespace std;

// Function and algos in STL 
// Standard template library

int main() 
{
    
    
    // string s; 
    // cin >> s;
    
    // cout << s.substr(2,2) << endl;
    // cout << s.substr(1) << endl;
    string s; cin >> s;
    
    int n = s.size();
    
    for(int i=0;i<4;i++){
      cout << s.substr(0,i+1) <<" ";
      cout << s.substr(n-i-1) << endl;
      
    }
    s.substr(a,b); it will print a string start index a 
                  b denotes the count of char that the string has
    
    s.substr(a); it will simply print the string starting from a'th index
   
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() 
{
  // substring, subarray  
    
  // Subsequences = >  non continus part of the array or string / order remain same
  
  // abcd
  // 1111  totals no of subsqs = 2*2*2*2 = 2^n = 2^(length of the array or string)
  // 0000
  
  // "b"
  // "c"
  // "d"
  // "ac"
  // "bd"
  // "ad"
  // "bc"
  
  
  // ""
  // "a"
  // "ab"
  // "abc"
  // "abcd"
  // "acd"
  // "abd"
  // "bcd"
  // "abd"
  // "cd"
    
  string s;
  cin >> s; // user input
  
  int n = s.size(); // string size
  int end = pow(2,n)-1;  // 2^n-1 it will consider all my all cases
  
  for(int i=0 ; i<=end; i++){
      
 
    string ans=""; // empty string
    // 011
    // 100
  //   bit   a    b    c 
  //         0   1     2
  // 0  000  001  010  100  ""
  // 1  001  001  010  100  "a"
  // 2  010  001  010  100  "b"   
  // 3  011  001  010  100  "ab"
  // 4  100  001  010  100   "c"
  // 5  101  001  010  100   "ac"
  // 6  110  001  010  100   "bc" 
  // 7  111  001  010  100  "abc"
               
    //(3&(1<<1))
    for(int j=0;j<n;j++){
      if(i&(1<<j))  ans += s[j]; //determine jth it will include my ans or not
    }
    // after iterating 
    cout << ans << endl;
    
  
  }
    
    
    
    
    
    
    
    return 0;
}

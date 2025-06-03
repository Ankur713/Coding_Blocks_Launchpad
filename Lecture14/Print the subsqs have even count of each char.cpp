#include <bits/stdc++.h>
using namespace std;

int main() 
{

  string s;
  cin >> s; // user input
  
  int n = s.size(); // string size
  int end = pow(2,n)-1;  // 2^n-1 it will consider all my all cases
  
  for(int i=0 ; i<=end; i++){
    
    string ans=""; // empty string
    
    for(int j=0;j<n;j++){
      if(i&(1<<j))  ans += s[j]; //determine jth it will include my ans or not
    }
    // i have generated my subsqs
    // after iterating 
    string s = ans;
    
    int n = s.size();
    
    int a[26];
    for(int i=0;i<26;i++) a[i] = 0; // count of each char is 0 in starting
    
    for(int i=0;i<n;i++){
       char curr = s[i];
       a[curr-'a']++;
       
    }
    bool flag = true;
    for(int i=0;i<26;i++){
      if(a[i]%2)  {
        flag = false;
        break;
      }
    }
    if(flag) cout << s << endl;
    
  }
    
    
    return 0;
}

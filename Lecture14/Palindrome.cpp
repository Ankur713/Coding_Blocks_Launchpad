#include <bits/stdc++.h>
using namespace std;

int main() 
{
    
  string s;
  cin >> s;
  
  int n = s.size();
  
  int start = 0 , end = n-1;
  bool flag = true;
  
  while(start<end){
    if(s[start] != s[end]) {
      flag = false;
      cout<<"FALSE";
      break;
    }
    start++;
    end--;
  }
  
  if(flag) cout <<"TRUE";
  
    
    return 0;
}

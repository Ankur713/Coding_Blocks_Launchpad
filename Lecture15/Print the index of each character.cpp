#include <bits/stdc++.h>
using namespace std;



int main() 
{  
  

 
  map<char,int > mp;
  
  int n;
  cin >> n;
  
  for(int i=0;i<n;i++){
    
    char ch; cin >> ch;
    mp[ch] = i;
    
  }
  
  for(auto i:mp){
    cout << i.first <<" " << i.second << endl;
  }

  return 0;
}

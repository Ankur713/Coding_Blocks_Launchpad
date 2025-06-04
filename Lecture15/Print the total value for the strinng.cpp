#include <bits/stdc++.h>
using namespace std;



int main() 
{  
  
  int n;
  cin >> n;
  
  map<string,int> mp;

  for(int i=1;i<=n;i++){
    
    string s; cin >> s;
    char ch;  cin >> ch;
    int value;cin >> value;
    
    if(mp[s] == 0)  mp[s] = 1;
    
    if(ch =='*') mp[s] *= value;
    else mp[s] /= value;
  }
  // for(auto i:mp){
  //   cout << i.first << " "<< i.second << endl;
  // }
  
  int k;
  cin >> k;
  for(int i=1;i<=k;i++){
    string s;
    cin >> s;
    cout << mp[s] << endl;
  }
 
  

  return 0;
}

#include <bits/stdc++.h>
using namespace std;



int main() 
{  
  
 //  char -> array of integers
 //  char -> vector of integers // size is dynamic
 
  map<char,vector<int> > mp;
  
 // map< 1st datatype, 2nd datatype> nameofmap
  int n; 
  cin >> n;
  //mp<char, vector<int> mp;
  // key -- value
  // char   vector<int>
  // mp[a].push_back(value)
  
  for(int i=1;i<=n;i++){
    char ch;
    cin >> ch;
    
    int value;
    cin >> value;
    mp[ch].push_back(value);
    
  }
  for(auto i:mp){
    cout << i.first <<"=>";
    vector<int>ans = i.second;
    for(auto e:ans) cout << e <<" ";
    cout << endl;
  }

 

  return 0;
}

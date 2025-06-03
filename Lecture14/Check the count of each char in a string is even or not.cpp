#include <bits/stdc++.h>
using namespace std;

int main() 
{
    
    string s; 
    cin >> s;
    
    int n = s.size();
    
    // int a[23];  [1,3,4,4,4]
    //             {'a',3}, {'g',6}
     
    map<char,int> mp;
    
  //  map<datatype1,datatype2> nameofcontainer
   //    key -> value
   // i.first  i.second
   
    for(auto i:s) mp[i]++;
    
   // mp['b']++;
  // {   {'a',2} , {'b',2}   }
  //         i.first         i
  //         i.second
    // a ->2 
    // b-> 2 
    // c-> 2  
    // d-> 1
    // i.fist , i.second
    // a->2 
    // b->2 
    // c->2 
    // d->1
    bool flag = true;
    
    
    for(auto i:mp){
      if(i.second % 2 ) {
        flag = false;
        cout <<"FALSE";
      }
    }
    if(flag)
    cout<<"TRUE";
    
    
    
    return 0;
}

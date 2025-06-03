#include <bits/stdc++.h>
using namespace std;

int main() 
{
    
    int n;
    cin >> n;
    
    map<char,int> mp;
    // char, cash//
    for(int i=0;i<8;i++){
       char x; cin >> x;
       int money; cin >> money;
       
    //   mp[x] += money;
       mp[x] = mp[x] + money;
            //  = 30+70
    }
    
    int k; cin >> k;
    for(int i=1;i<=k;i++){
      
       char x; cin >> x;
       cout << mp[x] << endl;
           // mp[x].second
    }
    
    
  return 0;
}

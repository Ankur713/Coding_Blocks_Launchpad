#include <bits/stdc++.h>
using namespace std;

int main() 
{
    
    int n; cin >> n;
    int ans  = 0;
    for(int i=5;i>=0;i--){
      int t = ((n>>i)&1);
      cout<<t;
      if(t) ans++;
    }
    cout << endl;
    cout << ans << endl;
    // setbits = 1;
    // unsetbits = 0;
    cout <<__builtin_popcount(n) << endl;
    
    
    return 0;
}

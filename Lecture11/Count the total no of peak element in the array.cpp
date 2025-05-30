#include <bits/stdc++.h>
using namespace std;



int main() 
{
  
  int n;
  cin >> n;
  
  int a[n+1];
  for(int i=1;i<=n;i++) cin >> a[i];
  
  int ans = 0;
  for(int i=2;i<=n-1;i++){
    
    if(a[i] > a[i-1] && a[i] > a[i+1]) {
      ans++;
    }
  }
  
  cout << ans << endl;
  return 0;
}

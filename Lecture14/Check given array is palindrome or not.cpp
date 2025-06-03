#include <bits/stdc++.h>
using namespace std;

int main() 
{
    
    int n;
    cin >> n;
    
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    
    int b[n];
    for(int i=0;i<n;i++) b[i] = a[i];
    
    reverse(b,b+n);
    for(int i=0;i<n;i++){
      if(a[i] != b[i]) {
        cout<<"FALSE";
        break;
      }
    }
    cout<<"TRUE";
    return 0;
}

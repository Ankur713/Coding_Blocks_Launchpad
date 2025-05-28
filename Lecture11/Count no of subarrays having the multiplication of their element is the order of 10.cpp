#include <bits/stdc++.h>
using namespace std;

int main() {
  
  
 
  int n;
  cin >> n; 
  
  int a[n];
  for(int i=0;i<n;i++) cin >> a[i];
  
  int ans = 0;
  
  for(int i=0;i<n;i++){
    
    // i th index of subarray ka part hai 
    int product = a[i];
    if(product%10 == 0) ans++;
    
    for(int j=i+1;j<n;j++){
        
        product = product*a[j];
        // i--------j 
        if(product%10 == 0) ans++;
        
    }
    
  }
  cout << ans << endl;
  
 
 
 
 
 
 
 
  // 0 1 2 3 4 5 = index
  
  // 0 
  // 0 1 
  // 0 2 
  // 0 3 
  // i j
  
  // subarray = continues order of elements
  // 1   = 0th index
  // 1 1  
  // 1 1 2 
  // 1 1 2 2 
  // 1 1 2 2 3 
  // 1 1 2 2 3 4
  // 1    = 1st index
  // 1 2 
  // 1 2 2 
  // 1 2 2 3 
  // 1 2 2 3 4 
  // 2    = 2nd index
  // 2 2 
  // 2 2 3 
  // 2 2 3 4 
  // 2    = 3rd index
  // 2 3 
  // 2 3 4 
  // 2 3 4 
  //     = 4th index 
  // 3 
  // 3 4 
  // 3 4 
  // 4     = 5th index 
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  return 0;
}









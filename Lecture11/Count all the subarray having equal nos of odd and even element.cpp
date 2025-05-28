#include <bits/stdc++.h>
using namespace std;

int main() {
  
  
 
  int n;
  cin >> n; 
  
  int a[n];
  for(int i=0;i<n;i++) cin >> a[i];
  
 
  int cnt = 0;
  for(int i=0;i<n;i++){
   
    int odd = 0, even = 0;
    
    if(a[i]%2) odd++;
    else even++;
      
    for(int j=i+1;j<n;j++){
      
      if(a[j]%2) odd++;
      else even++;
       // start i and end j
      if(odd == even) cnt++;
      
    }
  }
  
  cout << cnt << endl;
 
 
 
 
 
 
 
 
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









#include <bits/stdc++.h>
using namespace std;

// int fact( int n){
//   // base condition 
//   if(n == 0) return 1;
//   // it exactly tell my recursive function to stop at a particular 
//   // condition
//   // recursive funtion it will call again and again 
//     return  n* fact(n-1);
   
// }
// Reverse a string using recursion 

  void solve(int i, int a[] ,int n) {
    
     if(i>=n/2) return; // base 
     swap(a[i], a[n-i-1]);
     solve(i+1,a,n);
  }
  // whenever you are passing any array it will pass always by address  //reflect
  // whenever you are passing any string it will through value
  
  int main() 
  {
    
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    
    solve(0,a,n);
    for(auto i:a) cout << i <<" ";
    cout << endl;
    
    return 0;
  }


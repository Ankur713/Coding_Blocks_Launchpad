#include <bits/stdc++.h>
using namespace std;

// In variable not using the & operator alwasy passes with value 
// Pass the value a new copy will create


// Recursion 
 
// 1 Array 
// 2 Strings 
// 3 Ind 
// 4 2-d Matrix 
// 5 Bit recursion


void solve(int ind,int &mini , int &maxi , int a[], int n) {
     // base condition 
      if(ind > n-1) return;
      maxi = max(maxi,a[ind]);
      mini = min(mini,a[ind]); 
      // recursive call 
      solve(ind+1, mini, maxi,a,n);
}

int main() 
{
    
  int n; 
  cin >> n;
  
  int a[n];
  for(int i=0;i<n;i++) cin >> a[i];
  
  int mini = INT_MAX;
  int maxi = INT_MIN;
 
  solve(0,mini,maxi,a,n); 
  
  cout << mini <<" " << maxi << endl;
    
    
     
    return 0;
}

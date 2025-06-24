#include <bits/stdc++.h>
using namespace std;

int cnt;
int target;
int n,k;

void solve(int index, int a[]) {
   // base case
   if(index > n-1) return;
   // operation 
   if(a[index] == target) a[index] = k;
   // recursive call
   solve(index+1, a);
}

int main() 
{
  

  cin >> n;
  int a[n];
  for(int i=0;i<n;i++) cin >> a[i];
  
  cin >> target;
  cin >> k;
  solve(0,a);
  
 for(auto i:a) cout << i <<" ";
  
  return 0;
}

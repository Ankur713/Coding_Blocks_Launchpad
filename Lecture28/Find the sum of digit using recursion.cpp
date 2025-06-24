#include <bits/stdc++.h>
using namespace std;

//int n,m;

int solve(int n){
  
  // Base case
  if(n>=0 && n <= 9) return n;
  // Recurisve call
  
  return n%10+solve(n/10);
  
}

int main() 
{
  
  int n;
  cin >> n;
  
  int ans = solve(n);
  
  cout << ans << endl;
  
  
  
  return 0;
}

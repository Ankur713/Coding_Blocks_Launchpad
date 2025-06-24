#include <bits/stdc++.h>
using namespace std;

//int n,m;
int solve(int n , int p){
  
   // Base case
   if(p == 0) return 1;
   
   
   // Recursive call 
   return n*solve(n,p-1);
}


int main() 
{
  
  int n,p;
  cin  >> n >> p;
  
  
  // 2, 5
  // ans = 1    (2,5)
  // ans = 2   (2,4)
  // ans = 2*2   (2,3)
  // ans = 2*2*2    (2,2);
  // ans = 2*2*2*2   (2,1)
  // ans = 2*2*2*2*2*1  (2,0)
  
  
  
  
  
  
  
  
  //int ans = solve(n,p);
  cout << pow(n,p) << endl;
  
 // cout << ans << endl;
  
  
  return 0;
}

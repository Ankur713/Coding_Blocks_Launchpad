#include <bits/stdc++.h>
using namespace std;

int n,m;

int paths(int i, int j){
  
  // base condtion 
   if(i == n-1  or j== m-1) return 1;
   
   // recursive call 
   
   int down  = paths(i+1,j);
   int right = paths(i,j+1);
   
   return down + right;
   
  
}
int main() 
{
   n = 5, m = 5;
    
  cout << paths(0,0);
     
    return 0;
}

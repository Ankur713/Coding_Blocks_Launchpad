#include <bits/stdc++.h>
using namespace std;

int evensum = 0 , oddsum = 0;

void solve(int start, int end){
  
  // base case
  if(start > end) return;
  // operation 
  if(start %2 == 0) evensum  = evensum + start;
  else oddsum = oddsum+ start;
  
  // recursive call
  solve(start+1, end);
  
}

int main() 
{
    // a= 10;
    // b = 15;
    // 10 11 12 13 14 15
    
    // evensum = 10+12+14
    // oddsum = 11+13+15
    
    int start, end;
    cin >> start >> end;
    
    int  ans =  solve(start,end);
    // recursive call i will increment
    // base case 
    // i> end return 
   cout << ans << endl;
  
  
   cout << oddsum << " " << evensum << endl;
  
  
  
  
  return 0;
}

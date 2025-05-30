#include <bits/stdc++.h>
using namespace std;



int main() 
{
   string source, target;
   cin >> source >> target;
   
   int ans = 0;
   
   int n = source.size();
   int m = target.size();
   
   
   for(int i=0;i<n;i++){
      
      string temp = source.substr(i,2);
      if(temp == target){
        ans++;
      }
      
   }
   cout << ans << endl;
  
  
  return 0;
  
}

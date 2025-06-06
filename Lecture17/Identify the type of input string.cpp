#include <iostream>
using namespace std;

int main() 
{

  string s;
  cin >> s;
  
  bool lower = false, upper = false, integer = false;
  // true = > 1 ,otherwise => 0
  for(auto i:s){
    if(i >='a' && i <='z') lower = true;
    if(i >='A' && i <='Z') upper = true;
    if(i >='0' && i <='9') integer= true;
  }
  
  int ans = lower + upper + integer; // 2 , 3 in case of mixed
  if(ans > 1){
    cout <<"MIXED";
  }
  else if(lower) cout <<"LOWER";
  else if(upper) cout <<"UPPER";
  else if(integer) cout<<"INTEGER";
  
  
  
    
    return 0;
}

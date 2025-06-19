#include <bits/stdc++.h>
using namespace std;

// In variable not using the & operator alwasy passes with value 
// Pass the value a new copy will create
set<string> st;
// Recursion 
 
// 1 Array 
// 2 Strings 
// 3 Ind 
// 4 2-d Matrix 
// 5 Bit recursion
void solve(int ind , string &temp, string &s) {
  
    // base case 
    if(ind == s.size()) {
       st.insert(temp);
       return;
    }
    // recursive call
    solve(ind+1,temp,s); // We're not considering the current char
    
    temp.push_back(s[ind]);
    solve(ind+1,temp,s); // considering the current char 
  
    temp.pop_back();

}


int main() 
{
  string s;
  cin >> s;
  
  string temp = ""; // it hold the subseqs of string at at particular
  // position
  
  solve(0,temp,s);
  cout << st.size() << endl;
  for(auto i:st) cout << i << endl;

  return 0;
}











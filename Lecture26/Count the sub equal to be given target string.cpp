#include <bits/stdc++.h>
using namespace std;

// In variable not using the & operator alwasy passes with value 
// Pass the value a new copy will create
vector<string> st;
// Recursion 
 
string target;
// 1 Array 
// 2 Strings 
// 3 Ind 
// 4 2-d Matrix 
// 5 Bit recursion
// bool palin(string s){
//   int left = 0, right = s.size();
//   while(left < right){
//     if(s[left] != s[right]) return false;
//   }
//   return true;
// }


void solve(int ind , string &temp, string &s) {
  
    // base case 
    if(ind == s.size()) {
      
      if(temp == target){
        st.push_back(temp);
      }
    
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
  
  cin >> target;
  
  string temp = ""; // it hold the subseqs of string at at particular
  // position
  
  solve(0,temp,s);
  cout << st.size() << endl;
  

  return 0;
}











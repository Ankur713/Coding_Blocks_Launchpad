#include <bits/stdc++.h>
using namespace std;

// In variable not using the & operator alwasy passes with value 
// Pass the value a new copy will create

int row, col;
// Recursion 
 
// 1 Array 
// 2 Strings 
// 3 Ind 
// 4 2-d Matrix 
// 5 Bit recursion

void solve( string &s) {
   int n = s.size();
   
   int start = 0;
   int end = n-1;
   while(start <= end){
     swap(s[start], s[end]);
     start = start+1;
     end = end-1;
   }
   
}

int main() 
{
  string s;
  cin >> s;
  solve(s);
  cout << s << endl;

  return 0;
}











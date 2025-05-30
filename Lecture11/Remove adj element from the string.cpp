#include <bits/stdc++.h>
using namespace std;

int main() 
{
  
  int n;
  cin >> n;
  
  string s;
  cin >> s;
  
  stack<char> st;
  
  for(int i = 0; i < n ; i++ ){
    char curr = s[i];
    if(st.size() > 0 && st.top() == curr) {
      st.pop();
    } 
    else {
      st.push(curr);
    }
  }

  string temp;
  while(st.size() > 0){
     temp = temp + st.top();
     st.pop();
  }
  reverse(temp.begin(), temp.end());
  cout << temp << endl;
  cout << temp.size() << endl;
  
  return 0;
}

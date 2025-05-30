#include <bits/stdc++.h>
using namespace std;

int main() 
{
  
   int n; 
   cin >> n;
   
   string s; 
   cin >> s;
   
   stack<char> st;
   bool flag = false;
   for(int i=0; i<n; i++){
     char curr = s[i];
     if(curr =='(') st.push('(');
     else {
       if(st.size() > 0) {
         st.pop();
       }
       else {
         cout <<"INVALID";
         flag = true;
         break;
       }
     }
   }
   if(st.size() == 0 && !flag ) {
     cout <<"VALID";
   }
   if(st.size() > 0){
     cout <<"INVALID";
   }
  
  return 0;
}

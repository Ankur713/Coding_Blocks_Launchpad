#include <bits/stdc++.h>
using namespace std;

int main() 
{
    
   set<string> st;
   
   int n;
   cin >> n;
   
   for(int i=0;i<n;i++){
     string temp;
     cin >> temp;
     st.insert(temp);
   }
   
   for(auto i:st) cout << i << endl;
    
    
    
    return 0;
}

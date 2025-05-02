#include <bits/stdc++.h>
using namespace std;

int main() 
{
   string s;
   cin >> s;

   int cnt1=0,cnt0=0;

   int n = s.size();
   for(int i=0;i<n;i++){
     if(s[i]=='0') cnt0++;
     else cnt1++;
   }
   cout << cnt1 << " "<< cnt0;

    return 0;
}
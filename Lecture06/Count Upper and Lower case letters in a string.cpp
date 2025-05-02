#include <bits/stdc++.h>
using namespace std;

int main() 
{
   string s;
   cin >> s;

   int upper=0,lower=0;

   int n = s.size();
   for(int i=0;i<n;i++){
     if(s[i] >='a' && s[i] <='z') lower++;
     else upper++;
   }
   cout << lower << " "<< upper;

    return 0;
}
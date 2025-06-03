#include <bits/stdc++.h>
using namespace std;

int main() 
{
    
    string s;
    cin >> s;
    
    int n = s.size();
    
    char start = s[0];
    char end = s[n-1];
    
    if(start == end){
      cout<<"EQUAL";
    }else {
      cout<<"NOT EQUAL";
    }
    
    
    
    
    return 0;
}

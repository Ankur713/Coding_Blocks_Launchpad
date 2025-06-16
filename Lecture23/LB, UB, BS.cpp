#include <bits/stdc++.h>
using namespace std;

int main() 
{
   
   
    // Binary search
    // TC: log(N)
    int n; 
    cin >> n;
    int k; 
    cin >> k;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    // array should be in shorted order 
    cout << binary_search(v.begin(),v.end(),k) << endl;
    
    // Lower bound 
    // if element exist then return the element 
    // other next element in the container
    cout << lower_bound(v.begin(),v.end(),k)-v.begin() << endl;
    
    


   // Upper bound
   // always return the next greater element
    cout << upper_bound(v.begin(),v.end(),k)-v.begin() << endl;
   
   
   
   
   
   
   return 0;
}

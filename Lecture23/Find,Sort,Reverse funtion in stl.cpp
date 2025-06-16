#include <bits/stdc++.h>
using namespace std;

// Function and algos in STL 
// Standard template library

int main() 
{
    
    // sort funtion 
    
    // In-case of arrays
     int n; cin >> n;
    // int a[n];
    // for(int i=0;i<n;i++) cin >> a[i];
   
    //sort(a,a+n); 
    //sort(index from where sorting is start, end);
   
    // for(auto i:a) cout << i <<" ";
    // cout << endl;
  
   // In-case of vector 
  vector<int>a(n);
  for(int i=0;i<n;i++) cin >> a[i];
  
  reverse(a.begin(),a.end());
  // sort(a.begin(),a.end());
  // sort(Iterator pointing to the starting index, end);
 // iterator =>pointer to the adress of the index
  for(auto i:a) cout << i <<" ";
  cout << endl;
  
  // find function 
  //string s; cin >> s;
  
  // s.find()   ==   1 string::npos  ending pos of my string 
 //               == we have find the give string in our string
  // if(s.find("cj") != string :: npos) {
  //   cout <<"FOUND";
  // }else cout <<"NOT found";
   
  
    
    return 0;
}

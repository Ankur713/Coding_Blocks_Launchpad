#include <bits/stdc++.h>
using namespace std;

// C++ STL


// 1.  Algos

// max (a,b);
// min(a,b);
// binary_search(b,b+n,a)  2 3
// lower_bound 2,3
// upper_bound 3
// rotate

// 2.  Containers

// Array = [1,2,3]
// Set =   (2 3,4  5, 2) = 2,2,3,4,5
// Unordred set
// Map = key-pair
// Multiset
// Unordered_map
// Mulimap
// Stack
// Queue
// Priority Queue


// Containers = For storing the data types

// 1 .Array
// 2. Vector
// 3. deque
// 4. set
// 5. Map
// 6. Multiset
// 7. Multimap

   int aa[26];
  
  

int main() {
 
  
 // 1 1 2 2 3 4 = array 
 // Print all the subarray for a given array
 // 
  int n;
  cin >> n; 
  
  int a[n];
  for(int i=0;i<n;i++) cin >> a[i];
  
 // set<int> st; // store only unique elements
  // for(auto i:a) st.insert(i);
  // cout << st.size() << endl;
  
  vector< vector<int> > st; // custom containers
  
  
  int cnt = 0;
  for(int i=0;i<n;i++){
    
    vector<int>v; // v is going to store my subarray 
    v.push_back(a[i]);
    //st.push_back(v);
   // cout << a[i] << endl;
    
    for(int j=i+1;j<n;j++){
      
      v.push_back(a[j]); // 1 1 2 2 3
  
      set<int> stt;
      for(auto i:v) stt.insert(i);
   
      if(stt.size() == 2) {
         cnt++;
         st.push_back(v);
      }
    
    }
  }
  cout << cnt << endl;
  
  for(int i=0;i<st.size();i++){
    vector<int> b = st[i];
    for(auto i:b) cout << i <<" ";
    cout << endl;
  }
  // 0 1 2 3 4 5 = index
  
  // 0 
  // 0 1 
  // 0 2 
  // 0 3 
  // i j
  
  // subarray = continues order of elements
  // 1   = 0th index
  // 1 1  
  // 1 1 2 
  // 1 1 2 2 
  // 1 1 2 2 3 
  // 1 1 2 2 3 4
  // 1    = 1st index
  // 1 2 
  // 1 2 2 
  // 1 2 2 3 
  // 1 2 2 3 4 
  // 2    = 2nd index
  // 2 2 
  // 2 2 3 
  // 2 2 3 4 
  // 2    = 3rd index
  // 2 3 
  // 2 3 4 
  // 2 3 4 
  //     = 4th index 
  // 3 
  // 3 4 
  // 3 4 
  // 4     = 5th index 
  
  
  
  
  
  return 0;
}









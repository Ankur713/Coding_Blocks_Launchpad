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
  
 // 1.  int a[3];
  // a[0] = 1;
  // a[1] = 2;
  // a[2] = 3;
  
  // for(int i=0;i<3;i++) cout << a[i] <<" ";
  
  // 2  vector
  // vector<int>a;
  // a.push_back(12);
  // a.push_back(25);
  // a.push_back(494);
  
  // for(int i=0;i<a.size();i++) cout << a[i] <<" ";
  
  // 3 deque 
  // deque<char>a;
  // a.push_back('a');
  // a.push_back('b');
  // a.push_front('c');
  // for(int i=0;i<a.size();i++) cout << a[i] <<" ";
   
  // 4.set<int>st;
  // st.insert(45);
  // st.insert(20);
  // st.insert(30);  // 20 30 45
   
  // for(auto i:st) cout << i <<" ";
  
   
   // 4 map  key ->value
   
  // map<int,string> mp;
  // mp[1] = "dhdkdh";
  // mp[1] = "Coding block";
  // {1, dhdkdh}, {5, coding block}
    
   
  // for(auto i: mp) cout << i.first <<" " << i.second  << endl;
   
  // set<int>mst;
  // mst.insert(4);
  // mst.insert(30);
  // mst.insert(4);
   
  // for(auto i:mst) cout << i <<" ";
  
  // multimap<int,int> mmp;
  // // mmp[1] = 10;
  // // mmp[1] = 20;
  // mmp.insert({1,10});
  // mmp.insert({1,20});
  
  // for(auto i:mmp) cout << i.first <<" "<< i.second <<endl;
  // set<int> st;
  // int n; 
  // cin >> n;
  
  // for(int i=0;i<n;i++){
  //   int x; cin >> x;
  //   st.insert(x);
  // }
  // cout << st.size() ;
  // map<int,int> mp;
  // int n; cin >> n;
  // for(int i=0;i<n;i++){
  //   int x; 
  //   cin >> x;
    
  //   mp[x] = i;
    
  // }
  
  // for(auto i:mp) cout << i.first <<" "<< i.second << endl;
  
  // string a,b;
  // cin >> a;
  // cin >> b;
  
  // multiset<char> st1,st2;
  
  // for(auto i:a) st1.insert(i);
  // for(auto i:b) st2.insert(i);
  
  // if(st1 == st2) {
  //   cout <<"Strings are anagram";
  // }
  // else {
  //   cout <<"Strings are not anagram";
  // }
  
  
//   map<char,int> mmp1, mmp2;
//   string a, b;
//   cin >> a;
//   cin >> b;
 
  
//   // for(int i=0;i<26;i++) 
// // ab--- z
// // 110000000000000000000000000000
    
//   for(auto i:a){
//     mmp1[i]++;
//   }
//   for(auto i:b){
//     mmp2[i]++;
//   }
 
// if(mmp1 == mmp2) cout <<"TRUE";
// else cout <<"FALSE";
    
  // vector<int>v(26,0);
  // string s; cin >> s;
  // for(auto i:s){
  //   v[i-'a']++;
  // }
  // //for(auto i:v) cout << i <<" ";
  // for(int i=0;i<s.size();i++){
  //   if(v[s[i]-'a'] == 1) {
  //     cout << i;
  //     break;
  //   }
  // }
  
  // string s; 
  // cin >> s;
   
  
  // vector<int>first(26,-1),last(26,-1);
  
  
  // for(int i=0;i<s.size();i++){

  //   if(first[s[i] -'A'] == -1) {
  //     first[s[i] -'A'] = i;
  //   }
    
  //   last[s[i]-'A'] = i;
    
  // }
  
  // for(int i=0;i<26;i++){
  //   int ff = first[i];
  //   int ss = last[i];
  //   if(ff == ss)  ss = -1;
    
  //   cout << char('A'+i)  <<"=>"<< ff <<" "<< ss << endl;
    
  // }
  
  
  stack<int> st; // last-in first-out
  st.push(1);
  st.push(2);
  st.push(3);
  
  cout << st.top() << endl;
  st.pop();
  cout <<st.top() ;
  
  
  
  
  
  
  
  
  
  
  
  
  
  return 0;
}










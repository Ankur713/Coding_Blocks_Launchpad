#include <bits/stdc++.h>
using namespace std;

int main() 
{
   
   int size,targetsum;
   cin >> size >> targetsum;
  
   int a[size];
   for(int i=0; i<size; i++) cin >> a[i];
   int ans = 0;
   // ans => For storing my  cout of current  
   //currsum => For storing my sum of subarrays
   vector<vector<int>>store;
   
   for(int i=0;i<size;i++){
     
     vector<int>currsubarray;
     int currsum = 0;
     
     for(int j=i;j<size;j++){
       
         currsum = currsum + a[j];
         currsubarray.push_back(a[j]);
         // subarray i--------------j
         if(currsum == targetsum){
           ans++;
           store.push_back(currsubarray);
         }
     }
   }
   
   cout << ans << endl;
   
   for(auto i:store){
     vector<int>now = i;
     for(auto j:now) cout << j <<" ";
     cout << endl;
   }
  
   
   
    return 0;
}

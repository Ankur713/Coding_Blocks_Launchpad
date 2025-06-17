#include <bits/stdc++.h>
using namespace std;


void output(int ind, vector<int>&ds,int arr[], int n) {
  if(ind == n){
    for(auto it:ds) {
      cout << it <<" ";
    }
    if(ds.size() == 0){
      cout <<"{}";
    }
    cout << endl;
    return;
  }
  ds.push_back(arr[ind]);
  output(ind+1,ds,arr,n);
  ds.pop_back();
  output(ind+1,ds,arr,n);
  
  
}


int main() 
{
 
   int n; 
   cin >> n;
   
   int a[n];
   for(int i=0;i<n;i++) cin >> a[i];
    
   vector<int>ds;// for any instant it will hold all the elements in subseq
   output(0,ds,a,n);
   
 
  return 0;
}


#include <bits/stdc++.h>
using namespace std;

int k;
void solve (int ind, vector<int>&ds, int arr[], int n){
  // base case
  if(ind == n){
    int sum = 0;
    for(auto i:ds) sum  = sum + i;
    if(sum == k){
        for(auto it:ds) cout << it <<" ";
        cout << endl;
    }
    return;
  }
  // recurvise call
  // condition 1 we can take the elment 
  ds.push_back(arr[ind]);
  solve(ind +1 , ds, arr, n);
  // conditon 2 we can't take the element
  ds.pop_back();
  solve(ind+1,ds,arr,n);
  
}

int main() 
{
  int n;
  cin >> n;
  
  int a[n];
  for(int i=0;i<n;i++) cin >> a[i];
  

  cin >> k;
  vector<int> ds; // it is used to store the subseq at a given point 
  solve(0, ds, a, n);
    
    return 0;
}

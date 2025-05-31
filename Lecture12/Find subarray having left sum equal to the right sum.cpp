#include <bits/stdc++.h>
using namespace std;

int main() 
{
    
    int n, k; 
    cin >> n >> k ;
    
    int a[n];
    
    for( int i = 0 ; i < n ;i++) cin >> a[i];
    
    int ans = 0; // for storing my count
    for(int i=0;i<n;i++){  // Starting index of my subarray
      
      vector<int>curr; // For storing my subarray
      for(int j=i;j<n;j++){ // Ending index of my subarray
        
        curr.push_back(a[j]); // Pushing the element inside subarray
        // subarray i-j  
        if(curr.size() %2 == 0) { // checking the subarray size
          
          int leftsum = 0, rightsum =0; // for leftsum and rightsum
          // subarray already generated and even length
          // 1 2 2 1
          // 1 2, 2 1
             0 1  2 3
          for(int k=0;k<curr.size();k++){
            if(k<curr.size()/2) leftsum += curr[k];
            else rightsum += curr[k];
          }
          if(leftsum == rightsum) ans++; // condition
        }
        
      }
      
    }
    
    cout << ans << endl;
    
    
    
    
    
    
    
    
    return 0;
}

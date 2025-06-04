#include <iostream>
using namespace std;



int main() 
{  
  int n; 
  cin >> n;
  
  int a[n];
  for(int i=0;i<n;i++) cin >> a[i];
  
  int b[n];
  for(int i=0;i<n;i++) b[i] = 1;
  
  b[0] = a[0];
  for(int i=1;i<n;i++) b[i] = b[i-1]*a[i];
  // Prefix sum 
  
  int k;
  cin >> k;
  
  for(int i=1;i<=k;i++){
   
    int left, right;
    cin >> left >> right;
    
    int overallsum = b[right]; // 
    int subsum = 1;
    if(left != 0) subsum  = b[left-1];
    cout << overallsum/subsum << endl;
    
  }
  
  return 0;
}

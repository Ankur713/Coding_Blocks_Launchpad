#include <iostream>
using namespace std;



int main() 
{  
  int n; // Input of my array size
  cin >> n;
  
  int a[n]; /// declare the array
  for(int i=0;i<n;i++) cin >> a[i]; // array input
  
  int k; cin >> k; // k => no of query input
  for(int i=1;i<=k;i++){  //  input the querys
    int l,r; // denotes the start and ending of q 
    cin >> l >> r; // input start and ending
    int ans = 0; // for storing my ans 
    for(int j=l;j<=r;j++) ans = ans + a[j];// sum calc
    cout << ans << endl; // output the ans 
  }
    
  return 0;
}

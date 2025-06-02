#include <iostream>
using namespace std;

int main() 
{
   
    
    int n; cin >> n;
    int k; cin >> k;
   // int nn = n;
    // before kth bit set
    for(int i=10;i>=0;i--){
      cout << ((n>>i)&1 );
    }
   // n = nn;
    n = (n&(~(1<<(k-1))));
    cout << endl;
    // after set the kth bit
     for(int i=10;i>=0;i--){
      cout << ((n>>i)&1 );
    }
  
    return 0;
}

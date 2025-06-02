#include <iostream>
using namespace std;

int main() 
{
    // Count the no of setbit
   //5 = 000101
   //1st  
    int ans = 0;
    int currno = 5;
    for(int i=5;i>=0;i--)  {
      int currbit =((currno >> i) & 1);
      if(currbit) ans++;
    }
    // // 5 => 00101 
    //           001
    //           010
    
    cout << ans <<endl;
      
    ans = 0;
    // 2nd
    
    int myno = 5;
    while(myno > 0){
      int currbit =  myno%2;
      if(currbit) ans++;
      myno = myno/2;
    }
    cout << ans << endl;


    
    return 0;
}

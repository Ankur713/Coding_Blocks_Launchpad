#include <iostream>
using namespace std;

int main() 
{
    // decimal to binary
   //5 = 000101
     
    int currno = 5;
    
      for(int i=5;i>=0;i--) 
      cout <<  ((currno >> i) & 1);
      
    int myno = 5;
    cout << endl;
    // 5%2 = 1 
    // 2%2 = 0 
    // 1%2  1
    while(myno > 0){
      cout << myno%2;
      myno = myno/2;
    }


    
    return 0;
}

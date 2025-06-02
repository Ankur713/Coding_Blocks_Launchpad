#include <bits/stdc++.h>
using namespace std;


// Binary numbers and basic of bits
// 0 - 0 
// 1 - 1  
// 2 - 10
// 3 - 11 
// 4 - 100 
// 5 - 101
//     210

// Binary number to the decimal no 
// 101 = (2^0)*1 + (2^1)*0 + (2^2)*1 = 5
// 210
// start from lsb to msb then simply do the power of 2 
//in term of index and multiply with the current value  and perform addition

// AND OR XOR
//       AND  OR   XOR
// 0 0   0     0    0
// 0 1   0     1    1
// 1 0   0     1    1
// 1 1   1     1    0

// powers of two
//   2*2 = 4 
//   2/2 = 1

// Shifting operator 
//   <   >

// LEFT SHIFT OPERATOR 
//  2 ->           00010  before shifting  = 2
 //                  43210
//  (2 << 1)       00100  after shifting   = 4 
 //                  43210
// If we have any no and performed the left shit on it basically the power of 2's will get increment 

// RIGHT SIFT OPERATOR 
//  (2>> 1)     00010 before right shifting = 2
//                43210
//              00001  = (2^0)*1 + (2^1)*0 + (2^2)*0 + (2*3)*0 + (2^4)*0 
//                43210       1    +   0    +    0     +   0    +   0  =  1

// pow(1st, 2nd) 
      // 1st^2nd

int main() 
{
  
  
  // string s; cin >> s;
  // int ans = 0; // decimal representation of the no of string s 
  //   012
  //  101  = decimal
  //  210
  //2^0*1 + 2^1*0 + 2^2*1 
  //    1  +  0 + 2
  // int n = s.size();
  // int index = 0;
  // for(int i=n-1;i>=0;i--) {
  //   ans = ans + pow(2,index) * (s[i]-'0');
  //   index++;
  // }
  // cout << ans << endl;
  // cout <<"AND OPERATOR" << endl;
  // cout << (0&0) << endl;
  // cout << (0&1) << endl;
  // cout << (1&0) << endl;
  // cout << (1&1) << endl;
  // cout <<"OR OPERATOR" << endl;
  // cout << (0|0) << endl;
  // cout << (0|1) << endl;
  // cout << (1|0) << endl;
  // cout << (1|1) << endl;
  
  // cout <<"XOR OPERATOR" << endl;

  // cout << (0^0) << endl;
  // cout << (0^1) << endl;
  // cout << (1^0) << endl;
  // cout << (1^1) << endl;
  
  // cout <<"NOT OPERATOR" << endl;
  // cout <<   (!(1&0)) << endl;
  
  // cout <<"LEFT SHIFT" << endl; // multiply by 2
  // cout << (2<<2) << endl;
  
  // cout <<"RIGHT SHIFT" << endl;
  // cout << (2>>1) << endl;
  //    00010 
  //    00001
  //      43210
        
  //    00100 after left shifting
  //    01000
  //     43210

  //    00001 after right shifting 
  // INT_MAX represents the max value integer can store
 // cout << INT_MAX << endl;
  // int = 32 
  // long int 64 
  // long long int 128 
  // 1 bit is alway reserved for checking my no is +ve or -ve 
  // -3
  // 011
  // cout << (1<<31)-1 << endl;
  // cout << (1LL<<63) -1 << endl;
  //cout << (1LL << 127)-1 << endl;
  
   //( 1 << 31) -1 
   
  // 0001 = 1 in Binary
  // 3210
  // 0100
  // 0
  //1111111111111111111111111111111
  
  
  return 0;
}

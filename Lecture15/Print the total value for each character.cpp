#include <iostream>
using namespace std;



int main() 
{  
// INPUT:  
//   N 
//   1--N
//   char, int  char->value
//   K  query
//   1---K  char 

// OUPUT: Print an integer denotes the total value
// a = 30 *200 *89
// b = 20 * 3
// c = 40

// a-----z 
// 0----25
// 0 = a
// 1 = b
  int n;
  cin >> n;
  
  int a[26];
  for(int i=0;i<26;i++) a[i] = 1;
  // a-0 
  // a-a 
  // b = 1 
  // b-a = 1 
  // c = 2 
  // c-a = 2
  // a-a  0
  // b-a  1
  // c-a  2
  for(int i=0;i<n;i++){
     char ch; 
     cin >> ch;
     int value;
     cin >> value;
     a[ch-'a'] *= value;
     //a[0]
     
  }
  
  int k; cin >> k;
  for(int i=1;i<=k;i++){
     char ch;
     cin >> ch;
     
     cout << a[ch-'a'] << endl;
  }


  
  
  
  
  
  return 0;
}

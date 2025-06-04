#include <iostream>
using namespace std;


int a[26];

// if you declare any array of contant size 
// element already to 0
// 0 *30  = 0 
 
  
int main() 
{  
  
  // INPUT:
  // N 
  // 1----------N 
  // CHAR , SIGN , VALUE
  // K 
  // 1-----K 
  // CHAR 
  
  // OUPUT: char -> total value
  int n; 
  cin >> n;
  
  for(int i=0;i<26;i++) a[i] = 1;
  
  for(int i=1;i<=n;i++){
    char ch,sign;
    cin >> ch >> sign;
    
    int value;
    cin >> value;
    
    if(sign =='*') a[ch-'a'] *= value;
    else  a[ch-'a'] /= value;
  }
  int k;
  cin >> k;
  
  for(int i=1;i<=k;i++){
    char ch;
    cin >> ch;
    cout << a[ch-'a'] << endl;
  }
  

  
  return 0;
}

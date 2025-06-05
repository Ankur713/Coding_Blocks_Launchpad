#include <iostream>
using namespace std;

// Recursion 
// whenever a funtion call itself 

// int solve(int n) {
  
//   if(n == 1) return 1;        n = 3      n = 2         n = 1
//   return n*solve(n-1);  // 3*solve(2)   // 2*solve(1)     1
//                       // 3*2                // 2*1  2
// } 
// //n = 3
// int solve(3){
//   if(n== 1) return 1; // didn't execute
//   return 3*solve(2);        //          = 3*2
// }
// // n = 2

// int solve(2){
//   if(n== 1) return 1; // didn't execute
//   return 2*solve(1);  //                    =2*1
// }
// // n = 1
// int solve(1){
//   if(n==1) return 1; // true                =  1
//   //return  didn't execute
// }
// base condtion  
// 1. top to down apporach 

//  printing statment
//  base condtion
// funtion call 

// 2. bottom up apporach 

//  base condtion
// funtion call
// printing statement

// TOP DOWN 
// void print(int n){
  
//   cout << n << endl;
  
//   if(n == 1) return ;
//   print(n-1);
// }
// BOTTOM UP 
// void print(int n){
 
//   if(n < 1) return;
//   print(n-1);
  
//   cout << n << endl; 
  
// }
// n = 10;
// void print(10) {
//   if(n<1) return ; //not execute
//   print(9); execute
//   cout << n << endl; // not execute
// }
// n= 9;
// void print(9) {
//   if(n<1) return ; //not execute;
//   print(8) ; execute;
//   cout << n << endl; // not execute
// }
 
// n = 1 
// void print(1){
//   if(n <1) return ; //not execute
//   print(0);
//   cout << n << endl; // not execute;
// }
 
// void print(0){
//     if(n<1) return ;
    
// }

int n;

int print(int k){  // 2,5
  
  if(k <1) return 1; 
  
  return n*print(k-1);  
}

// n = 5       32
// 2*print(4); 2*16
// n = 4  
// 2*print(3); 2*8
// n=3  
// 2*print(2); 2*4
// n = 2 
// 2*print(1); = 2*2
// n= 1 
// 2*print(0); = 2*1
 

int main() {
  
  int k;
  
  cin >> n >> k;
  
  int xt = print(k);
  cout << xt << endl;
  
  return 0;
    
}



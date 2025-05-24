#include <bits/stdc++.h>
using namespace std;  



int main(){
    
  int row, col;
  cin >> row >> col;

  int mat[row][col];
  for(int i=0;i<row;i++) {
    for(int j=0;j<col;j++){
        cin >> mat[i][j];
    }
  }
 
 int b[row*col+1];
 for(int i=0;i<=row*col;i++) b[i] = 0;
 
 for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        b[mat[row][col]]++;
    }
 }

for(int i=0;i<=row*col;i++){
    cout << i <<": " << b[i] << endl;
}
    
}

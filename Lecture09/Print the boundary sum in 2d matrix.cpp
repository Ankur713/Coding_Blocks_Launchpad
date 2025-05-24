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
     
     int sum = 0;

     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(i == 0 or i== row-1 or j == 0 or j == col-1){
                sum += mat[i][j];
            }
        }
     }
     cout << sum ;
    
}

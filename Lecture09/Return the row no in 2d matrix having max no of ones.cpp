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
     
      int b[row];
      for(int i=0;i<row;i++) b[i] = 0;

      for(int i=0;i<row;i++){
            int curone = 1;
            for(int j =0;j<col;j++){
                curone *= mat[i][j];
            }

            b[i] = curone;
      }

     int ans = 0, maxone = 0;
     for(int i=0;i<row;i++){
        if(b[i] > maxone){
            maxone = b[i];
            ans = i+1;
        }
     }
     cout << ans ;
}

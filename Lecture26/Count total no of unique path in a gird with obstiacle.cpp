#include <bits/stdc++.h>
using namespace std;

// In variable not using the & operator alwasy passes with value 
// Pass the value a new copy will create

int row, col;
// Recursion 
 
// 1 Array 
// 2 Strings 
// 3 Ind 
// 4 2-d Matrix 
// 5 Bit recursion

int countpath(int i, int j ,vector<vector<int>> &grid   ) {
  
    // Out of bound
    if(i == row or j == col) return 0; 
    
    if(grid[i][j] == 1) return 0; // in case of cell is blocked
    
    if(i== row-1 && j==col-1)  return 1; // destination 
    
    // Recursive call 
    int down = countpath(i+1,j,grid); // move downward
    int right = countpath(i,j+1,grid); // move rightward
    
    return down + right;  // addition
  
}

int main() 
{
    
  
  cin >> row >> col; // input of row and cols
  
 vector<vector<int>> grid(row,vector<int>(col,0));
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++) {
      cin >> grid[i][j];
    } 
  } // input all the grid elements

  cout << countpath(0,0,grid); // funtion call
      // row, col, grid 0,0
    return 0;
}

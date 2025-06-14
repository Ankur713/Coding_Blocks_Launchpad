// User function template for C++
class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        // code here
        int ans = -1;      // stores the row no's
        int maxi = INT_MIN;// max no's of 1's
        
        int n = arr.size(); // rows's
        int m = arr[0].size(); // column's
        
        for(int i=0;i<n;i++){
            
            // rows
            int temp = 0;
            for(int j=0;j<m;j++){
                temp += arr[i][j]; 
            }
            if(temp > maxi){
                ans = i;
                maxi = temp;// if we're getting max no of one in current row
            }
            
        }
        
        return ans;
        
    }
};

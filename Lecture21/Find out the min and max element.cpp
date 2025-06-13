// User function Template for C++
class Solution {
  public:
    pair<int, int> getMinMax(vector<int> arr) {
     
     sort(arr.begin(), arr.end());
     
     int n = arr.size();
     
     int mini = arr[0];
     int maxi = arr[n-1];
     
     
     return {mini, maxi};
     
        
    }
};

class Solution {
  public:
    // Function to find all elements in array that appear more than n/k times.
    int countOccurence(vector<int>& arr, int k) {
        // Your code here
        map<int, int > mp;
        
        int  n = arr.size();
        double  final = n*1.0/k;
        
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        
        int ans = 0;
        
        for(auto i:mp){
            if(i.second > final){
                ans++;
            }
        }
        
        return ans;
    }
};

class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        
        int ans = 0;
        // for storing my ans 
        int n = nums.size();
        // size of my nums array
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(  (nums[i] + nums[j]) < target) ans++;
            }
        }
        
        return ans ;
    }
};

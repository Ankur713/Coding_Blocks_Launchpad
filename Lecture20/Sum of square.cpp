class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();
        for(int i=0;i<nums.size();i++){
            if(n%(i+1) == 0) {
                ans  = ans + (nums[i]*nums[i]);
            }
        }
        return ans;
    }
};

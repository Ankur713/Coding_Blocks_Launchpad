class Solution {
public:
    int missingNumber(vector<int>& nums) {
       
       sort(nums.begin(), nums.end());
      
      // sort(a,a+n); in casee of array
       int n = nums.size();

       int ans = n;

       for(int i=0;i<n;i++) {
            if(nums[i] != i) {
                ans = i;
                break;
            }
       }

       return ans;
    }
};

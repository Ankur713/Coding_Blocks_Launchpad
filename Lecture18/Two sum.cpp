class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        int n = numbers.size();
        int ii = 0, jj= n-1;

        vector<int> ans;
        while(ii < jj){

            int cursum = numbers[ii]+numbers[jj];
            
            if(cursum == target){
                ans.push_back(ii+1);
                ans.push_back(jj+1);
                break;
            }
            if(cursum > target) jj--;
            else ii++;

        }
        return  ans;
    }
};

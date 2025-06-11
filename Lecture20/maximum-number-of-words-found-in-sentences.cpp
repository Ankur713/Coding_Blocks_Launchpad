class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        
        int ans = 0;
        // for storing my ans 
        
        for(auto i:sentences) {

            string temp = i; // stores the words
            int tans = 1;
            for(auto it:temp){
                if(it ==' ') tans++;
            }
            ans = max(ans,tans);
        }

        return ans;
    }
};

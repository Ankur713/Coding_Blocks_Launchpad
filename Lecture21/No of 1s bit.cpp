class Solution {
public:
    int hammingWeight(int n) {

        int ans = 0;
        for(int i=31;i>=0;i--){ 
           
            int t =( (n>>i)&1 );
            if(t) ans = ans+1;

        }
        return ans;

    }
};

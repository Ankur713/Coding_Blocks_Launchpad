class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int n = s.size();
        int i = n-1;

        int ans = 0;
        while(i>=0 && s[i] ==' ') i--;// skkiping the last spaces
        // i pointing to the last char of my laststring
        // i is starting from the char 
        while(i>=0 && s[i] != ' ') {
            ans++;
            i--;
        }
        return ans;
    }
};

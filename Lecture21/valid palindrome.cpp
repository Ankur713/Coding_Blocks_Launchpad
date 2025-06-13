class Solution {
public:
    bool isPalindrome(string s) {

       string ans = "";
       int n = s.size();
       for(int i=0;i<n;i++) {
                         
         char curr = s[i]; // d     
         if(curr >='a' && curr<='z') ans.push_back(curr)
         if(curr >='A' && curr <='Z') {
            curr = tolower(curr);
           ans.push_back(curr);
         }
         if(curr >='0'  && curr <='9')ans.push_back(curr);
         // alphanumeric  skip
       }

       string temp = ans;
       reverse(temp.begin(), temp.end());
    
       return temp == ans;

    }
};
// TIME complexity    : Time limit exceed  3s
// Space complexity   : Memory limit exceed   1Gb

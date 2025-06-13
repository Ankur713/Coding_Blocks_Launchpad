class Solution {
  public:
    // Function to check if a string is a palindrome.
    bool isPalindrome(string& s) {
        // code here
        
        string temp = s;
        reverse(temp.begin(), temp.end());
        
        return temp == s;
        
        // ABC  !=   CBA
        // ABA  !=  ABA
        
    }
};

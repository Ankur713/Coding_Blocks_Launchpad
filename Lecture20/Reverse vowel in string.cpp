class Solution {
public:
    string reverseVowels(string s) {
        int n = s.size();
        vector<char> v; // push my all the vowels
        for(auto i:s){
            if(i=='a' or i =='A' or i=='e' or i=='E' or i=='i' or i=='I' or i=='o' or i=='O' or i =='u' or i=='U') {
                v.push_back(i);
            }
        }
        reverse(v.begin(), v.end()); // reverse all the vowels
        int j=0;
        for(int i=0;i<n;i++){ // iterating the string if we find the vowel
            if(s[i]=='a' or s[i] =='A' or s[i] =='e' or s[i] =='E' or s[i] =='i' or s[i] =='I' or s[i] =='o' or  s[i] =='O' or s[i]  =='u' or s[i] =='U') {
               s[i] = v[j];
               j++;
            }
        }
        //for(auto i:v) cout << i <<" ";
        
        return s;
    }
};

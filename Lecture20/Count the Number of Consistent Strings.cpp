class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int a[26];// for storing my char occurence
        for(int i=0;i<26;i++) a[i] = 0; 
        for(auto i:allowed) {
            a[i-'a'] = 1;// those char which are occuring inside the my allowed 
        }
        int ans = 0;// count of consistent strings 

        for(auto it:words){// simply iterating my words vector
            string temp  = it; // each string inside words one by one goes into it
            bool flag = true;// current is consistent or not
            for(auto pt : temp){ // checking each character 
                if(a[pt-'a'] == 0) {
                    flag = false;
                    break;
                }
            }
            if(flag) ans++; // flag == true my current string is consistent
        }
        return ans;
    }
};

class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int ans = 0;

        for(auto i:patterns){
            if(word.find(i) != string::npos)
            ans++;
            // find == string::npos string is not presennt 
            // find != string:: npos string present

            //  continername.find(jocheez app find kr rahe ho)    == string::npos   absent
            //                                                     != string::npos  present

        }
        return ans;
    }
};

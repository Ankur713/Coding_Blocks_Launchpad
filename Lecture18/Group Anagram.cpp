class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>>  temp;

        for(auto s: strs){
           
            string current = s;
            sort(current.begin(), current.end());
            temp[current].push_back(s);

        }

        vector<vector<string>> ans;
        for(auto i: temp){
            ans.push_back(i.second);
        }
        return ans;
    }
};

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for(auto it : strs) {
            vector<int> freq(26, 0);
            for(auto c : it) freq[(c - 'a')]++;
            string s = "";
            for(auto it : freq) {
                s += to_string(it);
                s+='|';
            }
            mp[s].push_back(it);
        }
        vector<vector<string>> ans;
        for(auto it : mp) {
            ans.push_back(it.second);
        }
        return ans;
    }
};

class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> f1(26,0), f2(26,0);
        if(s.size() != t.size()) return false;
        int n = s.size();
        for(int i = 0;  i < n; i++) {
            f1[s[i] - 'a']++;
            f2[t[i] - 'a']++;
        }
        for(int i = 0; i < 26; i++) {
            if(f1[i] != f2[i]) return false;
        }
        return true;
    }
};

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        unordered_map<char, int> freq;
        int left = 0;
        int ans = 0;
        for(int i = 0; i < n; i++) {
            freq[s[i]]++;
            while(left < i && freq[s[i]] > 1) {
                freq[s[left]]--;
                left++;
            }
            ans = max(ans, i - left + 1);
        }
        return ans;
    }
};

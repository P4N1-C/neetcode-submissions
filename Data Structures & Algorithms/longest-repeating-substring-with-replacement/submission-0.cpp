class Solution {
public:
    int f(const string& s, const int& k, char target) {
        int n = s.size();
        int left = 0;
        int ops = 0;
        int ans = 0;
        for(int right = 0; right < n; right++) {
            if(s[right] != target) {
                ops++;
            }
            while(ops > k) {
                if(s[left] != target) ops--;
                left++;
            }
            ans = max(ans, right - left + 1);
        }
        return ans;
    }
    int characterReplacement(string s, int k) {
        int ans = 0;
        for(char c = 'A'; c <= 'Z'; c++) {
            ans = max(ans, f(s, k, c));
        }
        return ans;
    }
};

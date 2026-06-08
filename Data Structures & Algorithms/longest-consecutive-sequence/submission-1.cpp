class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        set<int> s;
        for(int i : nums) s.insert(i);
        int prev = *s.begin();
        int ans = 1;
        int window = 1;
        for(auto it : s) {
            if(prev == it) continue;
            if(it - 1 == prev) {
                window++;
            } else {
                ans = max(ans, window);
                window = 1;
            }
            prev = it;
        }
        ans = max(ans, window);
        return ans;
    }
};

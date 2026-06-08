class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int> mp;
        for(int i = 0; i < n; i++) {
            int curr = nums[i];
            int rem = target - curr;
            if(mp.find(rem) != mp.end()) {
                return {mp[rem], i};
            }
            if(mp.find(curr) == mp.end()) {
                mp[curr] = i;
            }
        }
        return {};
    }
};

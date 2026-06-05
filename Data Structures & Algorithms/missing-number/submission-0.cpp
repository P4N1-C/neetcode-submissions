class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int num = 0;
        for(int i = 0; i <= n; i++) num ^= i;
        for(int i : nums) num ^= i;
        return num;
    }
};

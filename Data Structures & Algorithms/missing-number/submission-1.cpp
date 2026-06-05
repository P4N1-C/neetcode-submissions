class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int num = 0;
        for(int i = 0; i < n; i++) {
            num ^= i;
            num ^= nums[i];
        }
        num ^= n;
        return num;
    }
};

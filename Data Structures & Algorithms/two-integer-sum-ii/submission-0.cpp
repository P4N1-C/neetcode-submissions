class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        int n = num.size();
        int low = 0, high = n - 1;
        while(low <= high) {
            int curr = num[low] + num[high];
            if(curr == target) {
                return {low+1, high+1};
            } else if(curr > target) {
                high--;
            } else {
                low++;
            }
        }
        return {};
    }
};

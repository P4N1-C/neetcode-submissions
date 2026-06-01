class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        stack<int> st;
        int ans = 0;
        for(int i = 0; i < n; i++) {
            while(!st.empty() && height[st.top()] < height[i]) {
                int bot = st.top(); st.pop();
                if(st.empty()) break;
                int left = st.top();
                int w = i - left - 1;
                int h = min(height[i] , height[left]) - height[bot];
                ans += w * h;
            }
            st.push(i);
        }
        return ans;
    }
};

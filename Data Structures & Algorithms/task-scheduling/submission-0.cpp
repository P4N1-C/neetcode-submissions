class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> mp(26, 0);
        int maxi = 0;
        for(char&c : tasks) {
            mp[c - 'A']++;
            maxi = max(maxi, mp[c - 'A']);
        }
        int cnt = 0 ;
        for(int& i : mp) if(i == maxi) cnt++;
        int k = tasks.size();
        return max(k, (maxi - 1) * (n + 1) + cnt);
    }
};

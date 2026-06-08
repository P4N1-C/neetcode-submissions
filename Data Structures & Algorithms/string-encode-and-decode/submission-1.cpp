class Solution {
   public:
    string encode(vector<string>& strs) {
        string enc = "";
        for (string& s : strs) {
            int sz = s.size();
            enc += to_string(sz);
            enc += ',';
        }
        enc += '#';
        for (string& s : strs) {
            for (char& c : s) {
                enc += c;
            }
        }
        return enc;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i = 0;
        while (s[i] != '#') {
            int sz = 0;
            while (s[i] != ',') {
                sz = sz * 10 + (s[i] - '0');
                i++;
            }
            string ss(sz, ' ');
            ans.push_back(ss);
            i++;
        }
        i++;
        int num = 0;
        int n = s.size();
        while (i < n && num < ans.size()) {
            string& ss = ans[num];
            for (int j = 0; j < ss.size(); j++) {
                ss[j] = s[i++];
            }
            num++;
        }

        return ans;
    }
};
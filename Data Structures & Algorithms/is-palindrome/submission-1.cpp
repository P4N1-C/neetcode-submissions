class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0, h = s.size() - 1;
        while(l <= h) {
            if(!isalnum(s[l])) {
                l++;
                continue;
            } 
            if(!isalnum(s[h])) {
                h--;
                continue;
            } 
            s[l] = tolower(s[l]);
            s[h] = tolower(s[h]);
            if(s[l] == s[h]) {
                l++;
                h--;
                continue;
            } 

            return false;
        }
        return true;
    }
};

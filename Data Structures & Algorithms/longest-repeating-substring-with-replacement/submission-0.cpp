class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> mp;
        int l = 0;
        int mf = 0;
        int count = 0;
        vector<int> ans;
        int mx=0;
        for(int r=0;r<s.size();r++) {
            mp[s[r]]++;

            mf = max(mf,mp[s[r]]);
            int ws = r-l+1;

            if(ws - mf > k) {
                mp[s[l]]--;
                l++;
            }

            mx = max(mx, r-l+1);
        }

        return mx;
    }
};

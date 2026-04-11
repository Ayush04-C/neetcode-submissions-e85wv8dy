class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char , int> mp;
        int k = 3;
        int ans = 0;
        int right = 0;
        int left = 0;
        for( right = 0; right<s.size();right++) {

            while(mp.count(s[right])) {
                mp.erase(s[left]);
                left++;
            }
            

            mp[s[right]]++;
            ans = max(ans,right - left + 1);

        }

        return ans;
    }
};

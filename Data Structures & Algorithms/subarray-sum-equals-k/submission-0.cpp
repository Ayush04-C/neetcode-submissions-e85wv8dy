class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0;
        int prefix = 0;
        unordered_map<int, int> mp;
        mp[0] = 1;
        for(int i:nums) {
            prefix += i;

            if(mp.count(prefix - k)){
                count += mp[prefix - k];
            }

            mp[prefix]++;
        }

        return count;
    }
};
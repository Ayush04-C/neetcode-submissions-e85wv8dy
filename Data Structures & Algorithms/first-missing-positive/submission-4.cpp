class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();

        bool found  = false;

        for(int i=0;i<n;i++) {
            if(nums[i]==1) {
                found = true;
            }
        }

        if(!found) return 1;

        int max_ele = *max_element(nums.begin(), nums.end());
        
        int ans = 0;
        unordered_map<int, int> mp;
        unordered_map<int, int> mp2;

        for(int i=0;i<max_ele;i++) {
            mp[i+1]++;
        }

        for(int i=0;i<n;i++){
            mp2[nums[i]]++;
        }

        bool flag2 = false;
        for(int i = 1; i <= max_ele; i++) {
            if(mp2.find(i) == mp2.end()) {
                return i;
            }
        }

        return max_ele + 1;
    }
};
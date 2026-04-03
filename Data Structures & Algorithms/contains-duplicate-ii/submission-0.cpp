class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        bool isFound = false;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(nums[i]==nums[j] && abs(i-j)<=k && i!=j) {
                    isFound = true;
                    break;
                }
            }
            if(isFound) break;
        }
        if(isFound) return true;
        else return false;
    }
};
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n = arr.size();
        int l = 0;
        int r = n-k;

        int mid;

        while(l<r) {
            mid = (l+r)/2;
            if(abs(x-arr[mid])>abs(arr[mid+k]-x)) l = 1+mid;
            else r = mid ;
        }

        vector<int> a(arr.begin() + l, arr.begin() + l + k);

        return a;

       
    }
};
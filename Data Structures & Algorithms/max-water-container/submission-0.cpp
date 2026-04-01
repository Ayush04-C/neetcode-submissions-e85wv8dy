class Solution {
public:
    int maxArea(vector<int>& heights) {
        int max_area = 0;
        int n = heights.size();
        int ptr = 0;
        int area = 0;
        for(int i=0;i<n-1;i++) {
            for(int j=i+1;j<n;j++) {
                area= min(heights[i],heights[j])*(j-i);
                if (area > max_area) 
                    max_area=area;
                ptr++;
            }
        }
        return max_area;
    }
};

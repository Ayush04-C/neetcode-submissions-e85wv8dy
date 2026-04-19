class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int l= s1.size();
        int n = s2.size();
        if(l>n) return false;

        sort(s1.begin(),s1.end());
        for(int r=0;r<n;r++) {
            
            string ws = s2.substr(r,l);
            sort(ws.begin(),ws.end());

            if(s1==ws) return true;
             
        }
        return false;
    }
};

class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n = people.size();
        sort(people.begin(),people.end());
        int ptr1 = 0 ;
        int ptr2 = n-1;
        int count = 0;
        while(ptr1<=ptr2) {
            if(people[ptr1] + people[ptr2] <= limit && ptr1!=ptr2) {
                ptr1++;
            }
            ptr2--;
            count++; 
        }
        return count;
    }
};
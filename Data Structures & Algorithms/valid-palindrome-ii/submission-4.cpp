class Solution {
public:
    bool validPalindrome(string s) {
        string lower = "";
        string str = "";
        for(char c:s) {
            if(isalnum(c)) str+=c;
        }
        for(char c:str){
            lower+=tolower(c);
        }
        bool found = false;
        int n = s.size();
        int ptr1 = 0;
        int ptr2 = n-1;
        while(ptr1<ptr2){
            if(lower[ptr1] != lower[ptr2]){

                int i = ptr1+1;
                int j = ptr2;

                bool leftchek = true;

                while(i<j){
                    if(lower[i]!=lower[j]){
                        leftchek = false;
                        break;
                    }
                    i++;
                    j--;
                }

                i = ptr1;
                j = ptr2-1;

                bool rightchek = true;

                while(i<j){
                    if(lower[i]!=lower[j]){
                        rightchek = false;
                        break;
                    }
                    i++;
                    j--;
                }
                return rightchek || leftchek;
            }
            ptr1++;
            ptr2--;
        } 
        return true;
    }
};
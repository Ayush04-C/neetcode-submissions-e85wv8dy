class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> score;
        int n = operations.size();
        int ptr=0;
        for(int i=0;i<n;i++) {
            if(operations[i] == "+") {
                score.push_back(score[ptr-1] + score[ptr-2]);
                ptr++; 
            }
            else if(operations[i] == "D") {
                score.push_back(score[ptr-1]*2);
                ptr++;
            }
            else if(operations[i] == "C") {
                score.pop_back();
                ptr--;
            }
            else {
                score.push_back(stoi(operations[i]));
                ptr++;
            }
        }
        int sum=0;
        for(int i=0;i<score.size();i++) {
            sum+=score[i];
        }

        return sum;
    }
};
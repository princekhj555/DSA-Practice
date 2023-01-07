class Solution {
public:
    static bool cmp(vector<int> a,vector<int>b){
        if(a[1]>b[1])return true;
        else if(a[1]==b[1]){
            if(a[0]<b[0]){
                return true;
            }
        }
        return false;
    }
    vector<int> topStudents(vector<string>& positive_feedback, vector<string>& negative_feedback, vector<string>& report, vector<int>& student_id, int k) {
        unordered_set<string> positive;
        unordered_set<string> negative;
        for(auto a:positive_feedback){
            positive.insert(a);
        }
        for(auto a:negative_feedback){
            negative.insert(a);
        }
        vector<vector<int>> score(report.size(),vector<int>(2));
        for(int i=0;i<report.size();i++){
            string tmp="";
            score[i][0]=student_id[i];
            score[i][1]=0;
            for(int j=0;j<report[i].size();j++){
                if(report[i][j]==' '){
                    if(positive.count(tmp)){
                        score[i][1]+=3;
                    }else if(negative.count(tmp)){
                        score[i][1]--;
                    }
                    tmp="";
                }
                else tmp+=report[i][j];
            }
            if(positive.count(tmp)){
                        score[i][1]+=3;
                    }else if(negative.count(tmp)){
                        score[i][1]--;
                    }
                    tmp="";
        }
   
        sort(score.begin(),score.end(),cmp);
      
        vector<int> sol;
        for(int i=0;i<k;i++){
            sol.push_back(score[i][0]);
        }
        return sol;
    }
};
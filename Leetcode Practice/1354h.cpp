/*1354. Construct Target Array With Multiple Sums*/
class Solution {
public:
    bool isPossible(vector<int>& target) {
       priority_queue<int> q(target.begin(),target.end());
        long  total=0;
        for(int &n:target)
        {
            total+=n;
        }
        while(true)
        {
            int a=q.top();
            q.pop();
            total-=a;
            if(a==1||total==1)
                return true;
            if(a<total||total==0||a%total==0)
                return false;
            a%=total;
            total+=a;
            q.push(a);
        }
        
     
    }
};
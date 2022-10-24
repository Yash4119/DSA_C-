class Solution {
public:
    int fillCups(vector<int>& amount) {
        priority_queue<int>pq;
        
        for(int i=0;i<amount.size();i++){
            if(amount[i]>0)pq.push(amount[i]);
        }
        int sec=0;
        while(!pq.empty()){
            int one=0,two=0;
            
            one = pq.top();
            pq.pop();
            if(!pq.empty()){
                two = pq.top();
                pq.pop();
            }
                sec++;
            if(two-1 > 0){
                pq.push(two-1);
            }
            if(one-1 > 0){
                pq.push(one-1);
            }
            
        }
        
        return sec;
    }
};
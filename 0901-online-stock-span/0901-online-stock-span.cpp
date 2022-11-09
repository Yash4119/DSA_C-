class StockSpanner {
public:
    
    stack<pair<int,int>>st;
    
    StockSpanner() {
        
    }
    
    int next(int price) {
        int ct=1;
        
        while(!st.empty() && st.top().first <= price){
            ct += st.top().second;
            st.pop();
        }
        
        st.push({price,ct});
        return ct;
    }
};

/*
*************** BRUTE FORCE ******************

class StockSpanner {
public:
    
    vector<int>spans;
    
    StockSpanner() {
        
    }
    
    int next(int price) {
        int n = spans.size();
        int ct=1;
        
        for(int i=0;i<n;i++){
            if(price >= spans[i]){
                ct++;
            }
            else{
                ct=1;
            }
        }
        
        spans.push_back(price);
        
        return ct;
    }
};

*/

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
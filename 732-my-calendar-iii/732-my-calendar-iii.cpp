class MyCalendarThree {
    
    map<int,int>times;
    
public:
    
    int book(int start, int end) {
        times[start]++;
        times[end]--;
        int curr_events=0,ct=0;
        
        for(pair<int,int> it : times){
            ct = max(ct, curr_events+= it.second);
        }
        
        return ct;
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(start,end);
 */
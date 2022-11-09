class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        stack<pair<int,int>>st;
        vector<int>ans(temp.size());
        int ct=0;
        
        for(int i=temp.size()-1;i>=0;i--){
            while(!st.empty() && st.top().first <= temp[i]){
                st.pop();
            }
            
            (!st.empty())?ans[i] = st.top().second - i:0;
            st.push({temp[i],i});
            // cout<<st.top().first<<" "<<st.top().second<<endl;
        }
        return ans;
    }
};
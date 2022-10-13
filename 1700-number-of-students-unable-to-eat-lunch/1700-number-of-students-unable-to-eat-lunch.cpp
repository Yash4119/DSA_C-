class Solution {
public:
    int countStudents(vector<int>& st, vector<int>& sd) {
        
        int j=0;
        
        while(true){
            bool conv=false;
            
            for(int i=0;i<st.size();i++){
                if(st[i]!=-1 and st[i]==sd[j]){
                    st[i]=-1;
                    conv=true;
                    j++;
                    
                    break;
                }
            }
            
            // for(int i=0;i<st.size();i++){
            //     cout<<st[i]<<" ";
            // }
            // cout<<endl;
            
            if(conv==false){
                break;
            }
            // j++;
        }
        
        int ans = 0;
        for(int i=0;i<st.size();i++){
            if(st[i]!=-1){
                ans++;
            }
        }
        
        return ans;
    }
};
class Solution {
public:
    int countSegments(string s) {
       
        int ans=0;
        int n = s.size();
        string temp = "";
        
        for(int i=0;i<n;i++){
            if(s[i] == ' ' && temp.size()>0){
                ans++;
                
                // cout<<temp<<endl;
                temp="";
                continue;
            }
            if(s[i]!=' ')temp += s[i];
        }
        
        return (n>0 and s[n-1]!=' ')?ans+1:ans;
    }
};
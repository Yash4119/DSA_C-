class Solution {
public:
    vector<vector<string>> findDuplicate(vector<string>& paths) {
        unordered_map<string,vector<string>>mp;
        vector<vector<string>>ans;
        int n = paths.size();
        
        for(int i=0;i<n;i++){
            
            string directory = "";
            string temp="";
            string content = "";
            int j=0;
            while(j<paths[i].size()){
                
                if(paths[i][j] == ' '){
                    temp = directory;
                    temp += '/';
                    j++;
                    while(j<paths[i].size() and paths[i][j] != '('){
                        // cout<<paths[i][j];
                        temp += paths[i][j];
                        j++;
                    }
                    j--;
                    // cout<<temp<<endl;
                }
                else if(j<paths[i].size() and paths[i][j] == '('){
                    j++;
                    while(paths[i][j] != ')'){
                        // cout<<paths[i][j];
                        content += paths[i][j];
                        j++;
                    }
                    mp[content].push_back(temp);
                    // cout<<content<<" "<<temp<<endl;
                    content = "";
                }
                else{
                    // j++;
                    while(j<paths[i].size() and paths[i][j]!=' '){
                        // cout<<paths[i][j];
                        directory += paths[i][j];
                        j++;
                    }
                    // cout<<directory<<endl;
                    j--;
                }
                j++;
            }
        }
        
        for(auto it:mp){
            if(it.second.size() > 1){
                ans.push_back(it.second);
            }
        }
        
        return ans;
    }
};
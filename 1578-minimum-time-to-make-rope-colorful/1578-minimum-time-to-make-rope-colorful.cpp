class Solution {
public:
    int minCost(string colors, vector<int>& nt) {
        int time=0;
        int n = colors.size();
        
        for(int i=1;i<n;i++){
            if(colors[i] == colors[i-1]){
                // cout<<"Found"<<endl;
                vector<int>temp;
                temp.push_back(nt[i-1]);
                while(i<n and colors[i]==colors[i-1]){
                    temp.push_back(nt[i]);
                    i++;
                }
                
                sort(temp.begin(),temp.end());
                
                for(int j=0;j<temp.size()-1;j++){
                    time += temp[j];
                }
                
            }
        }
        return time;
    }
};
class Solution {
public:
    int compareVersion(string ver1, string ver2) {
        
        int n1 = ver1.size();
        int n2 = ver2.size();
        
        int i=0,j=0;
        
        int v1,v2;
        
        while(i<n1 || j<n2){
            v1=0,v2=0;        
            if(i<n1){
                while(i<n1 and ver1[i]!='.' && ver1[i]=='0'){
                    i++;
                }
                while(i<n1 and ver1[i]!='.'){
                    v1 = (v1*10) + (ver1[i]-'0');
                    i++;
                }
            }
            if(j<n2){
                while(j<n2 && ver2[j]!='.' && ver2[j]==0){
                    j++;
                }
                while(j<n2 && ver2[j]!='.'){
                    v2 = (v2*10) + (ver2[j]-'0');
                    j++;
                }                
            }
            if(v1 < v2){
                return -1;
            }
            else if(v1 > v2){
                return 1;
            }
            i++;
            j++;
        }
        
        
        return 0;
    }
};
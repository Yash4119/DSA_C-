class Solution {
public:
    
    int count_occurrences(string s){
        int ct = 0;
        
        for(int i=0;i<s.size()-1;i++){
            if(s[i]=='0' and s[i+1]=='1'){
                ct++;
                i++;
            }
        }
        
        return ct;
    }
    
    int secondsToRemoveOccurrences(string s) {
        int seconds=0;
        int ct = count_occurrences(s);
        
        while(ct>0){
            
            for(int i=0;i<s.size()-1;i++){
                if(s[i]=='0' and s[i+1]=='1'){
                    swap(s[i],s[i+1]);
                    i++;
                }
            }
            seconds++;
            ct = count_occurrences(s);
        }
        
        return seconds;
    }
};
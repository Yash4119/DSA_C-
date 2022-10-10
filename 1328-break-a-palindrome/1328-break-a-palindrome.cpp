class Solution {
public:
    string breakPalindrome(string pal) {
        if(pal.size()==1)return "";
        
        bool done = false;
        int ind=0;
        
        for(int i=0;i<pal.size()/2;i++){
            if(pal[i]!='a'){
                pal[i]='a';
                done = true;
                // cout<<"Entered";
                break;
            }
        }
        
        ind+=1;
        
        while(done!=true and ind <= 25){
            for(int i=pal.size()-1;i>=(pal.size()/2);i--){
                if(pal[i]!=('a'+ind)){
                    pal[i]=('a'+ind);
                    done = true;
                    break;
                }
            }
            ind+=1;
        }
        
        return pal;
    }
};
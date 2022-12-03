class Solution {
public:
    string reversePrefix(string word, char ch) {
        int ind=-1;
        
        for(int i=0;i<word.size();i++){
            if(ch==word[i]){
                ind=i;
                break;
            }
        }
        
        if(ind!=-1)reverse(word.begin(),word.begin()+ind+1);
       
        return word;
    }
};
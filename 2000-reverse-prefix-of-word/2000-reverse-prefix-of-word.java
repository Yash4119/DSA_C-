class Solution {
    
    public static String swap(String s, int x, int y){
        StringBuilder sb = new StringBuilder(s);
        sb.setCharAt(x, s.charAt(y));
        sb.setCharAt(y, s.charAt(x));
        return sb.toString();
    }
    
    public String reversePrefix(String word, char ch) {
        int ind=-1;
        
        for(int i=0;i<word.length();i++){
            if(ch==word.charAt(i)){
                ind=i;
                break;
            }
        }
        
        int s=0,e=ind;
        
        while(s<e){
            word = swap(word,s,e);
            s++;e--;
        }
        
        return word;
    }
}
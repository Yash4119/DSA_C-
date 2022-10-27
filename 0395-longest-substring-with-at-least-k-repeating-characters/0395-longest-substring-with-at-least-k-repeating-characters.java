class Solution {
    public int longestSubstring(String s, int k) {
        char[] arr = s.toCharArray();
        int n = s.length();
        
        HashMap<Character,Integer> mp = new HashMap<>();
        
        for(char it:arr){
            if(mp.containsKey(it)){
                mp.put(it, mp.get(it) + 1);
            }
            else{
                mp.put(it, 1);
            }
        }
        
        int idx=0;
        while(idx < n && mp.get(arr[idx]) >= k)idx++;
        
        if(idx==n)return n;
        
        int left = longestSubstring(s.substring(0,idx),k);
        int right = longestSubstring(s.substring(idx+1),k);
        
        return Math.max(left,right);
    }
}
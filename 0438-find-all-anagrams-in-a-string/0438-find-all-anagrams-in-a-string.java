class Solution {
    public List<Integer> findAnagrams(String str, String ptr) {
        List<Integer>ans = new ArrayList<>();
        int [] phash = new int[26];
        int [] hash = new int[26];
        
        char [] p = ptr.toCharArray();
        char [] s = str.toCharArray();
         
        int window = p.length;
        int len = s.length;
        
        
        if(len < window)return ans;
        
        int left = 0,right=0;
        
        while(right<window){
            phash[p[right]-'a'] += 1;
            hash[s[right]-'a'] += 1;
            right += 1;
        }
        right -= 1;
        
        while (right < len){
            if(Arrays.equals(phash,hash)){
                ans.add(left);
            }
            
            right += 1;
            if(right < len){
                hash[s[right]-'a'] += 1;
            }
            
            hash[s[left]-'a'] -= 1;
            left += 1;
        }
        
        return ans;
    }
}
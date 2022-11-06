class Solution {
    public String orderlyQueue(String s, int k) {
        if(k>1){
            char [] temp = s.toCharArray();
            Arrays.sort(temp);
            return new String(temp);
        }
        
        String res=s;
        for(int i=1;i<s.length();i++){
            String temp = s.substring(i)+s.substring(0,i);
            System.out.println(temp);
            if(res.compareTo(temp)>0){
                res=temp;
            }
        }
        return res;
    }
}
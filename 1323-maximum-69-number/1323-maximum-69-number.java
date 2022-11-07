class Solution {
    public int maximum69Number (int num) {
        int ind=-1,i=0;
        int temp = num;
        
        while(num>0){
            
            int rem = num%10;
            
            if(rem == 6){
                ind = i;
            }
            i++;
            num/=10;
        }
        
        if(ind>=0)temp = temp + (int)(Math.pow(10,ind) * 3);
        
        return temp;
    }
}
class Solution {
    
    
    
    public int subarraySum(int[] nums, int k) {
        int n = nums.length;
        int [] prefix = new int[n];
        
        prefix[0] = nums[0];
        
        for(int i=1;i<n;i++)
            {
                prefix[i] = prefix[i-1] + nums[i];
            }        
            
        HashMap<Integer,Integer>mp = new HashMap<>();
        int count=0;
            
        for(int i=0;i<n;i++){
            if(prefix[i] == k)count++;
            
            if(mp.containsKey(prefix[i]-k)==true){
                count+=mp.get(prefix[i]-k);
            }
            
            if(mp.containsKey(prefix[i])==true){
                int temp = mp.get(prefix[i]);
                mp.put(prefix[i],temp+1);
            }
            else{
                mp.put(prefix[i],1);
            }
        }
        
            return count;
    }
}

// Brute Force Java [TLE]

// public int subarraySum(int[] nums, int k) {
//         int n = nums.length;
        
//         int count=0;
        
//         for(int i=0;i<n;i++){
//             int sum = 0;
//             for(int j=i;j<n;j++){
//                 sum += nums[j];
//                 if(sum==k)count++;
//                 // System.out.println(sum);
//             }
//         }
        
//         return count;
//     }
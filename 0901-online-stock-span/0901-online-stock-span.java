class StockSpanner {

    ArrayList<Integer> ans = new ArrayList<>();
    public StockSpanner() {
        
    }
    
    public int next(int price) {
        int res = 0;
        
        ans.add(price);
        
        for(int i=ans.size()-1;i>=0;i--){
            if(price >= ans.get(i)){
                res++;
            }
            else{
                break;
            }
        }
        
        return res;
    }
}

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner obj = new StockSpanner();
 * int param_1 = obj.next(price);
 */
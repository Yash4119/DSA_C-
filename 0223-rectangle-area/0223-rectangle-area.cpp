class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int length1,length2;
        int breadth1,breadth2;
        
        length1 = ax2-ax1;
        breadth1 = ay2-ay1;
        
        length2 = bx2-bx1;
        breadth2 = by2-by1;
        
        int total = (length1*breadth1)+(length2*breadth2);
        
        int left,right,bottom,top;
        left = max(ax1,bx1);
        right = max(min(ax2,bx2),left);
        bottom = max(ay1,by1);
        top = max(min(ay2,by2),bottom);
        
        int intersection = (right-left)*(top-bottom);
        
        return total-intersection;
    }
};
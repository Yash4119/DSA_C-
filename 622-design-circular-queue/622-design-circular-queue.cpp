class MyCircularQueue {
public:
    
    vector<int>q;
    int size=0;
    int f=0,r=0;
    int n; 
    
    MyCircularQueue(int k) {
        q.resize(k,0);
        n = k;
    }
    
    bool enQueue(int value) {
        // cout<<"enQueue"<<endl;
        if(isFull()){
            return false;
        }
        
        q[r] = value;
        r = (r+1)%n;
        size+=1;
        
        return true;
    }
    
    bool deQueue() {
        // cout<<"deueue"<<endl;
        if(isEmpty()){
            return false;
        }
        
        f = (f+1)%n;
        size-=1;
        
        return true;
    }
    
    int Front() {
        // cout<<"front"<<endl;
        if(isEmpty()){
            return -1;
        }
        return q[(f+n)%n];
    }
    
    int Rear() {
        // cout<<"rear"<<endl;
        if(isEmpty()){
            return -1;
        }
        return q[(r+n-1)%n];
    }
    
    bool isEmpty() {
        // cout<<"empty"<<endl;
        if(size==0){
            return true;
        }
        return false;
    }
    
    bool isFull() {
        // cout<<"full"<<endl;
        if(size==n){
            return true;
        }
        return false;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */
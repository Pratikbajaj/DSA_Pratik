class CustomStack {
    vector<int> a;
    int maxSize;
public:
    int max;
    CustomStack(int maxSize) {
        this->maxSize = maxSize;
    }
    
    void push(int x) {
        if((int)a.size()<maxSize){a.push_back(x);}
    }
    
    int pop() {
        if(a.empty()){
            return -1;
        }
        int ans = a.back();
        a.pop_back();
        return ans;
    }
    
    void increment(int k, int val) {
        for(int i=0;i<min(k,(int)a.size());i++){
            a[i]+=val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */
class CustomStack {
    stack<int> st1;
    stack<int> st2;
public:
    int max;
    CustomStack(int maxSize) {
        max = maxSize;
    }
    
    void push(int x) {
        if((int)st1.size()<max){st1.push(x);}
    }
    
    int pop() {
        if(st1.empty()){
            return -1;
        }
        int ans = st1.top();
        st1.pop();
        return ans;
    }
    
    void increment(int k, int val) {
        if(st1.empty()){
            return;
        }
        while(!st1.empty()){
            st2.push(st1.top());
            st1.pop();
        }
        while(k>0 && !st2.empty()){
            st1.push(st2.top()+val);
            st2.pop();
            k--;
        }
        while(!st2.empty()){
            st1.push(st2.top());
            st2.pop();
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
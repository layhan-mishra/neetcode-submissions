class MinStack {
public:
    MinStack() {}
    
    void push(int val) {
        vals.push_back(val);
        if(mins.empty() || val <= mins.back())
        {
            mins.push_back(val);
        }
    }
    
    void pop() {
        if(vals.back() == mins.back())
        {
            mins.pop_back();
        }
        vals.pop_back();
    }
    
    int top() {
        return vals.back();
    }
    
    int getMin() {
        return mins.back();
    }
private:
    vector<int> vals;
    vector<int> mins;
};

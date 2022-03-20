895. Maximum Frequency Stack
class FreqStack {
public:
    
    int maxFreq = 0;
    unordered_map<int, int> freqs;
    vector<stack<int>> valuesByFreq = vector<stack<int>>(200);
    
    FreqStack() {
        valuesByFreq.push_back({});
    }
    
    void push(int val) {
        // updating freqs and maxFreq
        maxFreq = max(maxFreq, ++freqs[val]);
        // adding val to the stack for that frequency
        if (maxFreq == valuesByFreq.size()) valuesByFreq.push_back({});
        valuesByFreq[freqs[val]].push(val);
    }
    
    int pop() {
        // support variables
        int res = valuesByFreq[maxFreq].top();
        // updating the maps
        valuesByFreq[maxFreq].pop();
        freqs[res]--;
        // reducing the maxFreq when we have no more elements on this range
        if (valuesByFreq[maxFreq].empty()) {
            maxFreq--;
        }
        return res;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */
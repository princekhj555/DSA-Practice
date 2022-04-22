
/*705. Design HashSet*/

class MyHashSet {
public:
    vector<bool> sol;
    MyHashSet() {
       sol.resize(1e6+1,false); 
    }
    
    void add(int key) {
        sol[key]=true;
    }
    
    void remove(int key) {
        sol[key]=false;
    }
    
    bool contains(int key) {
        return sol[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
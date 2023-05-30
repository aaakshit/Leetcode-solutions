class MyHashSet {
public:
    unordered_set<int>m;
    MyHashSet() {
        
    }
    
    void add(int key) {
        m.insert(key);
    }
    
    void remove(int key) {
        m.erase(key);
    }
    
    bool contains(int key) {
        if(m.find(key)!=m.end())
            return 1;
        return 0;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
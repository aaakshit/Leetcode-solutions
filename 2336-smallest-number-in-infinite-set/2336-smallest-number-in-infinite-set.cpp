class SmallestInfiniteSet {
public:
    priority_queue<int,vector<int>,greater<int>>pq;
    unordered_set<int>st;
    SmallestInfiniteSet() {
        int i=1;
        while(i<1001){
            pq.push(i);
            st.insert(i);
            i++;
        }
    }
    
    int popSmallest() {
        cout<<pq.top()<<endl;
        int x=pq.top();
        pq.pop();
            st.erase(x);
            return x;
    
    }
    
    void addBack(int num) {
        if(st.find(num)==st.end())
        pq.push(num);
        st.insert(num);
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */
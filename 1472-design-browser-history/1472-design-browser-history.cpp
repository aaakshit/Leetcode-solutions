class BrowserHistory {
public:
vector<string>history;
//stack<string>for;
int curr;
    BrowserHistory(string homepage) {
        history.push_back(homepage);
        curr=0;
    }
    
    void visit(string url) {
        history.resize(curr+1);
        history.push_back(url);
        curr++;
    }
    
    string back(int steps) {
            int prev=curr-steps;
            if(prev<0) prev = 0;
            curr=prev;
           
        return history[prev];
    }
    
    string forward(int steps) {
        int next=curr+steps;
        if(next>=history.size()) next = (int)history.size()-1;
        curr=next;
        return history[next];
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */
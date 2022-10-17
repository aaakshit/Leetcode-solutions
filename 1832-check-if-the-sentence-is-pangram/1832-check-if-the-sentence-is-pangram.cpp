class Solution {
public:
    bool checkIfPangram(string str) {
        char h[26]={};
        for(int i=0;i<str.size();i++){
            h[str[i]-'a']++;
        }
        for(auto x:h){
            if(x==0)
                return 0;
        }
        return 1;
    
    }
};
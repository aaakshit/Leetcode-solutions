class Solution {
public:
    int addDigits(int num) {
        string s=to_string(num);
        while(s.size()>1){
            int sum=0;
            int i=0;
            while(i<s.size()){
                sum+=s[i++]-'0';
                
            }
            s=to_string(sum);
            // cout<<sum<<endl;
        }
        return stoi(s);
    }
};
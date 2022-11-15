class Solution {
public:
    string getHint(string secret, string guess) {
        unordered_map<char,int>m;
        int bulls=0,cow=0;
        for(int i=0;i<secret.size();i++){
            if(secret[i]==guess[i])
                bulls++;
            else{
                m[secret[i]]++;
            }
        }
        for(int i=0;i<secret.size();i++){
            if(secret[i]!=guess[i]&&m[guess[i]])
            {
                cow++;
                m[guess[i]]--;
            }
        }
        return to_string(bulls)+'A'+to_string(cow)+'B';
    }
};
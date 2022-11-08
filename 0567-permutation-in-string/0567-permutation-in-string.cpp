class Solution {
public:
    bool check(int h1[],int h2[]){
         for(int k=0;k<26;k++)
                if(h1[k]!=h2[k])
                    return false;
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int h1[26]={0};
        int h2[26]={0};
        if(s1.size()>s2.size())
            return false;
        for(int i=0;i<s1.size();i++){
            h1[s1[i]-'a']++;
            h2[s2[i]-'a']++;
        }
        int i=0,j=s1.size();
        while(j<s2.size()){
           if(check(h1,h2))
               return true;
            else{
                h2[s2[i++]-'a']--;
                h2[s2[j++]-'a']++;
            }
        }
         if(check(h1,h2))
               return true;
        return false;
    }
};
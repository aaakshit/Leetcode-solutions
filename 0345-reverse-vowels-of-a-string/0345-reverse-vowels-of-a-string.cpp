class Solution {
public:
    string reverseVowels(string s) {
        int i=0,j=s.size()-1;
        char h[256]={0};
        h['a']=1,h['A']=1,h['e']=1,h['E']=1,h['i']=1,h['I']=1,h['o']=1,h['O']=1,h['u']=1,h['U']=1;
        
        while(i<=j){
            while(i<j && h[s[i]]==0)
                i++;
            while(i<j && h[s[j]]==0)
                j--;
            
            swap(s[i++],s[j--]);
                
        }
        return s;
    }
};
const int n=2e4+10;
class Solution {
    int fen[n]={0};
public:
    
    void update(int i,int value){
        while(i<=n){
            fen[i]+=value;
            i+=(i&(-i));
        }
    }
    int sum(int i){
        int c=0;
        while(i>0){
            c+=fen[i];
            i-=(i&(-i));
        }
        return c;
    }
    vector<int> countSmaller(vector<int>& nums) {
        map<int,int>m;
        int add=1e4+1;
        for(int i=0;i<nums.size();i++){
            nums[i]+=add;
        }
        for(auto x:nums){
            update(x,1);
            m[x]++;
        }
        vector<int>ans;
        for(auto i:nums){
            if(m[i]==1)
                ans.push_back(sum(i)-1);
            else{
                ans.push_back(sum(i)-m[i]);
                m[i]--;
            }
            update(i,-1);
        }
        return ans;
    }
};
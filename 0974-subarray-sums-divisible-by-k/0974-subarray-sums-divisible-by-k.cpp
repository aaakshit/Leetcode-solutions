class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        int c=0,sum=0;
        m[0]=1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum<0){
                if(m.find(((sum%k)+k)%k)!=m.end()){
                    c+=m[((sum%k)+k)%k];
                   // cout<<((sum%k)+k)%k<<'n'<<endl;
                }
                m[((sum%k)+k)%k]++;
            }
            else{
                if(m.find(sum%k)!=m.end()){
                    c+=m[sum%k];
                   // cout<<sum%k<<'p'<<endl;
                }
                m[sum%k]++;
            
        }
        }
        return c;
    }
};
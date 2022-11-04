class Solution {
public:
    void rev(vector<int>&nums,int l, int h){
        while(l<=h){
            swap(nums[l++],nums[h--]);
        }
    }
    void rotate(vector<int>& nums, int k) {
      //   int n=nums.size();
      //   vector<int>v(n);
      //   int t=k%n;
      //   for(int i=0;i<t;i++){
      //       v[i]=nums[n-t+i];
      //   }
      //   for(int i=0;i<n-t;i++){
      //       v[t+i]=nums[i];
      //   }
      // nums=v;
        int n = nums.size();
        k = k % nums.size();
        if(k < 0){ 
            k += nums.size();
        }
       
      //  int n=nums.size()-1;
         rev(nums,n-k,n-1);
         rev(nums,0,n-k-1);
         reverse(nums.begin(),nums.end());
        
    }
};
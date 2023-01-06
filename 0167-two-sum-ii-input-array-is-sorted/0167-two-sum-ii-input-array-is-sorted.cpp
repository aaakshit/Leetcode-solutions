class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
       int left=0;
       int right = numbers.size()-1;
       vector<int>vv;
       while(left<=right){
           vector<int>v;
           v.push_back(left+1);
           v.push_back(right+1);
           int sum = numbers[left]+numbers[right];
           if(sum==target){
               return v;
           }else if(sum>target) right--;
           else left++;
       } 
       return vv;
    }
};
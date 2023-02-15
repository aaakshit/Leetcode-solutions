class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int>n;
        vector<int>ans;
        while(k>0){
            n.push_back(k%10);
            k=k/10;
        }
        int j=0,i=0;
        int c=0;
       for(i=num.size()-1;i>=0;i--){
           if(j<n.size()){
               num[i]+=n[j++]+c;
               if(num[i]>9){
                   num[i]=num[i]%10;
                   c=1;
               }
               else
                   c=0;
               ans.push_back(num[i]);
           }
           else
               break;
       }
        while(i>=0){
            num[i]+=c;
             if(num[i]>9){
                   num[i]=num[i]%10;
                   c=1;
               }
               else
                   c=0;
               ans.push_back(num[i--]);
        }
        while(j<n.size()){
            n[j]+=c;
            if(n[j]>9){
                n[j]=n[j]%10;
                c=1;
            }
            else
                c=0;
            ans.push_back(n[j++]);
        }
        if(c==1)
            ans.push_back(c);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
// [1,2,0,0]
// 34
// [2,7,4]
// 181
// [2,1,5]
// 806
// [0]
// 23
// [9,9,9,9,9,9,9,9,9,9]
// 1
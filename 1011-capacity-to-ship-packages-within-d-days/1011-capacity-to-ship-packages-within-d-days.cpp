class Solution {
public:
    int check(int mid,vector<int>&w){
        int c=1,sum=0;
        for(int i=0;i<w.size();i++){
            if(sum+w[i]>mid){
                c++;
                sum=w[i];
            }
            else{
                sum+=w[i];
            }
        }
        return c;
    }
    int shipWithinDays(vector<int>& w, int d) {
        int l=*max_element(w.begin(),w.end());
        int h=accumulate(w.begin(),w.end(),0);
        int ans=0;
        while(l<h){
            int mid=l+(h-l)/2;
            if(check(mid,w)<=d){
                ans=mid;
                h=mid;
            }
            else
                l=mid+1;
        }
        return l;
    }
};
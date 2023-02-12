class Solution {
public:
    int trap(vector<int>& h) {
        // vector<int>left(height.size());
        // vector<int>right(height.size());
        // int n=height.size();
        // left[0]=height[0];
        // for(int i=1;i<n;i++){
        //     left[i]=max(left[i-1],height[i]);
        // }
        // right[n-1]=height[n-1];
        // for(int i=n-2;i>=0;i--){
        //     right[i]=max(right[i+1],height[i]);
        // }
        // int sum=0;
        // for(int i=0;i<n;i++){
        //     sum+=min(left[i],right[i])-height[i];
        // }
        // return sum;
        vector<int>l(h.size());
        vector<int>r(h.size());
        l[0]=h[0];
        int n=h.size();
        int sum=0;
        r[n-1]=h[n-1];
        for(int i=1;i<n;i++)
            l[i]=max(l[i-1],h[i]);
        for(int i=n-2;i>=0;i--){
            r[i]=max(r[i+1],h[i]);
        }
        for(int i=0;i<n;i++){
            sum+=min(l[i],r[i])-h[i];
        }
        return sum;
    }
};
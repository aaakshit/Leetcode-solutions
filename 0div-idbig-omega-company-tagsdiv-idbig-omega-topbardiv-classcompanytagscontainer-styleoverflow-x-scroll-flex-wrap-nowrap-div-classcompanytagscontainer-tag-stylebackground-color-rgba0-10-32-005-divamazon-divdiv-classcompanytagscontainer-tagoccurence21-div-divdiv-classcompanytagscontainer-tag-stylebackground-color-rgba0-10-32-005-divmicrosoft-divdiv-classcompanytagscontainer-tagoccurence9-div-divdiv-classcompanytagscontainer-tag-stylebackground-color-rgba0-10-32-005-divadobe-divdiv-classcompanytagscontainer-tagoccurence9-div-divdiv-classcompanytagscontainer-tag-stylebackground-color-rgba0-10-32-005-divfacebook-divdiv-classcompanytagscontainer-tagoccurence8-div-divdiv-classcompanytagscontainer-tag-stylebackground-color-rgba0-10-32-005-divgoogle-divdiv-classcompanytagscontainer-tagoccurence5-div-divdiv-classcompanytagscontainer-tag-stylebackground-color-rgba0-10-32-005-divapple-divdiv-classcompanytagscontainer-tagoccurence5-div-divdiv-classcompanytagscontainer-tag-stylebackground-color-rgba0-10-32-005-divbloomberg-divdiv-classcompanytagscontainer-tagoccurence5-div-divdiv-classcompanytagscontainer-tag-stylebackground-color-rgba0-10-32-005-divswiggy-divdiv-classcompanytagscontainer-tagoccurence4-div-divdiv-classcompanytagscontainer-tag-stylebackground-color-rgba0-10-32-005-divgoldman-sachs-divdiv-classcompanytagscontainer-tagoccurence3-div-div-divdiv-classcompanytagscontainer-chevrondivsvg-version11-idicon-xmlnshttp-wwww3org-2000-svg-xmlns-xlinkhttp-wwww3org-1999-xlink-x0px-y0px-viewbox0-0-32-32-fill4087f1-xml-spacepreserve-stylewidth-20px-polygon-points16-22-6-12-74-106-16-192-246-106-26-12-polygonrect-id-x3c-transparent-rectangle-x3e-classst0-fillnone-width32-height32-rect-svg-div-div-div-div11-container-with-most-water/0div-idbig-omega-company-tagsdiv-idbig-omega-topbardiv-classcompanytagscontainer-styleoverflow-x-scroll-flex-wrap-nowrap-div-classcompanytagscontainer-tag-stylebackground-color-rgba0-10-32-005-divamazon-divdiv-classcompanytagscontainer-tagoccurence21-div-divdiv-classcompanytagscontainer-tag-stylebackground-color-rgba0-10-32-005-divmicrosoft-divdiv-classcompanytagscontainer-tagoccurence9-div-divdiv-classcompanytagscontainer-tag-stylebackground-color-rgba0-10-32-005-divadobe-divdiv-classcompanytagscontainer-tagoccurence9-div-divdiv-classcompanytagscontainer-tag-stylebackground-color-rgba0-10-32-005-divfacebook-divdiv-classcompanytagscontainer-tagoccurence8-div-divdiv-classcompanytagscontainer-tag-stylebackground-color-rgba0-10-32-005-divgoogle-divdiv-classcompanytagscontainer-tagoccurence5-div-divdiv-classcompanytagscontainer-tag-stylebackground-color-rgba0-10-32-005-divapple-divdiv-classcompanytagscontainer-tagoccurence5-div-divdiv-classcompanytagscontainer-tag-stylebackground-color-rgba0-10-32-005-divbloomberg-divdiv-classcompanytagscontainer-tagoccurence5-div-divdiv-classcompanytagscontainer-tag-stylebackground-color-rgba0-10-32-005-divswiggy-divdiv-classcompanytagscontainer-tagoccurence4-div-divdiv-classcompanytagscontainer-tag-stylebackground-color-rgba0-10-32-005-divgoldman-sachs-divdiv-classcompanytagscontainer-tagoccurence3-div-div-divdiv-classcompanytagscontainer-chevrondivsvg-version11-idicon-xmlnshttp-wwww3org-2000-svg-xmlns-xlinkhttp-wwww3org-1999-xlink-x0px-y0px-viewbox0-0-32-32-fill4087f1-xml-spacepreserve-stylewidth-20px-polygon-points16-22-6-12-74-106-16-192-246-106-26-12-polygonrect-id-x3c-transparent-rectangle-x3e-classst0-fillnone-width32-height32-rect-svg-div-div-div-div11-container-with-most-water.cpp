class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1;
        int mx=INT_MIN;
        int p=1;
        while(i<j){
           // cout<<min(height[i],height[j])<<endl;
            p=min(height[i],height[j])*(j-i);
            mx=max(mx,p);
            if(height[i]<height[j])
                i++;
            else
                j--;
        }
        return mx;
    }
};
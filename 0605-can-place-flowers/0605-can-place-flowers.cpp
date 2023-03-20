class Solution {
public:
   bool canPlaceFlowers(vector<int>& f, int n) {
        int previous=0,k=0;
        for(int i=0;i<f.size();i++)
        {
            if(previous==1 && f[i]==1)
            {
                k--;
                f[i-1]=0;
                previous=f[i];
                continue;
            }
            if(i==0)
            previous=0;
            if(f[i]==0 && previous == 0)
            {
                f[i]=1;
                k++;
            }  
            previous=f[i];
        }
        if(k>=n)
        return true;
        else
        return false;    
    }
};
class Solution {
public:
    int cnt(int k,vector<int>& piles){
        // float t=(float)m;
        // int c=0;
        // for(int i=0;i<piles.size();i++){
        //     if(piles[i]<m)
        //         c++;
        //     c+=ceil(piles[i]/m);
        // }
        // return c;
        int hour=0;
        for(int i=0;i<piles.size();i++)
        {
            if(piles[i] % k == 0)
            {
                hour+=piles[i]/k;
            }
            else
            {
                hour+=piles[i]/k;
                hour+=1;
            }
        }
        
        return hour;
    }
    bool cnt1(int mid ,vector<int>& piles,int h){
        long currHr=0;
        for(auto bana:piles){
            int spd=bana/mid;
            currHr+=spd;
            if(bana%mid!=0)
                currHr++;
            
        }
        return currHr<=h;
    }
    int minEatingSpeed(vector<int>& piles, int k) {
        //int l=*min_element(piles.begin(),piles.end());
       int l=1;
        int h=*max_element(piles.begin(),piles.end());
        int mid;
                    int ans=-1;
        while(l<=h){
            mid=l+(h-l)/2;
//             if(cnt(mid,piles)>k){
//                 l=mid+1;
//             }
//             else{
//                 if(mid==1||cnt(mid-1,piles)>k){
//                     return mid;
//                 }
                
//                 h=mid-1;
//             }

            
            if(cnt1(mid,piles,k)){
                ans=mid;
                h=mid-1;
               // l=mid+1;
            }else{
                l=mid+1;
            }
        }
        return ans;
    }
};
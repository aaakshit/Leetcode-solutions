class Solution {
public:
    long long check(long long mid,vector<int>&v,long long t){
       long long c=0;
        for(int i=0;i<v.size();i++){
            c+=mid/v[i];
        }
        return c;
    }
    long long minimumTime(vector<int>& time, long long t) {
       sort(time.begin(),time.end());
       long long l = 1, h = time[0]*t;
        while(l<h){
            long long mid=l+(h-l)/2;
            if(check(mid,time,t)>=t)
                h=mid;
            else
                l=mid+1;
        }
        return l;
    }
};
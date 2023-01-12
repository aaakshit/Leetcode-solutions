class Solution {
public:
    int lcm(long long a, long long b)
   {
    return (a / __gcd(a, b)) * b;
   }
    int cnt(long long n,long long a ,long long b){
        long long ans=0;
        long long x=(n/a);
        cout<<x<<'g'<<" ";
        long long y=(n/b);
         cout<<y<<'h'<<" ";
        long long z=(n/lcm(a,b));
         cout<<z<<'i'<<" ";
        ans=(x+y)-z;
        cout<<ans<<" ";
        cout<<endl;
        return ans;
    }
    int nthMagicalNumber(int n, int a, int b) {
      //  int l=__gcd(a,b);
       long long  l=min(a,b);
       int m = 1e9+7;
       long long  h=(long long)n*min(a,b);
        // cout<<l<<" "<<h;
       long long  mid;
        while(l<=h){
            mid=(l+(h-l)/2);
            if(cnt(mid,a,b)<n){
                l=mid+1;
            }
            else{
                if(mid==1||cnt(mid-1,a,b)<n)
                    return (int)(mid%m);
                h=mid-1;
            }
        }
        return 0;
        
    }
};
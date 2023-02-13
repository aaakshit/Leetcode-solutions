class Solution {
public:
    int countOdds(int low, int high) {
        int ans1=0,ans2=0;
        if(high%2){
            ans1+=(high/2)+1;
        }
        if(low%2){
            ans2+=(low/2)+1;
        }
        if(high%2==0){
            ans1+=high/2;
        }
        if(low%2==0){
            ans2+=low/2;
        }
        cout<<ans2<<" "<<ans1<<endl;
        if(low%2)
        return (ans1-ans2)+1;
        else
            return (ans1-ans2);
    }
};
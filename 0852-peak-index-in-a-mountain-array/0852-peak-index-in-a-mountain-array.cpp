class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l=0,h=arr.size()-1,mid;
        while(l<h){
            mid=(l+h)/2;
            if(arr[mid]>=arr[mid+1] && arr[mid]>=arr[mid-1])
                return mid;
            if(arr[mid]<=arr[mid+1])
                l=mid;
            else
                h=mid;
        }
        return mid;
    }
};
class Solution {
public:
//     int ser(vector<int>&arr, int l, int h, int key)
// {
//     if (l > h)
//         return -1;
 
//     int mid = (l + h) / 2;
//     if (arr[mid] == key)
//         return mid;
 
//     /* If arr[l...mid] is sorted */
//     if (arr[l] <= arr[mid]) {
//         /* As this subarray is sorted, we can quickly
//         check if key lies in half or other half */
//         if (key >= arr[l] && key <= arr[mid])
//             return ser(arr, l, mid - 1, key);
//         /*If key not lies in first half subarray,
//            Divide other half  into two subarrays,
//            such that we can quickly check if key lies
//            in other half */
//         return ser(arr, mid + 1, h, key);
//     }
 
//     /* If arr[l..mid] first subarray is not sorted, then
//     arr[mid... h] must be sorted subarray */
//     if (key >= arr[mid] && key <= arr[h])
//         return ser(arr, mid + 1, h, key);
 
//     return ser(arr, l, mid - 1, key);
// }
    bool search(vector<int>& nums, int target) {
     int i=1;
        while (i<nums.size()) {
            if (nums[i-1] > nums[i]) {
                break;
            }
            i++;
        }
        i = i==nums.size() ? 0 : i;
        int low = 0, high = nums.size()-1;
        while (low <= high) {
            int mid = low+(high-low)/2;
            int actual_mid = (mid+i)%nums.size();
            if (nums[actual_mid] == target) {
                return true;
            } else if (nums[actual_mid] < target) {
                low = mid+1;
            } else {
                high = mid-1;
            }
        }
        return false;
    }
};
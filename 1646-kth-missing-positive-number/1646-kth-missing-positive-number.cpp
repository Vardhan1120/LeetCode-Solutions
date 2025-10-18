class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int l=0;
        int h=arr.size();
        while(l<h){
            int mid=l+(h-l)/2;
            int missing=arr[mid]-(mid+1);
            if(missing < k) l=mid+1;
            else h=mid;
        }
        return l+k;
    }
};
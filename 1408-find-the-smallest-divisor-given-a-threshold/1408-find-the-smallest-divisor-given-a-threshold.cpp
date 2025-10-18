class Solution {
public:
int sumbyd(vector<int> &arr , int div){
    int sum=0;
    int n=arr.size();
    for(int i=0;i<n;i++){
        sum+=ceil((double)(arr[i]) / (double)(div));
    }
    return sum;
}
    int smallestDivisor(vector<int>& arr, int threshold) {
        int n = arr.size();
        if(n>threshold) return -1;
        int low=1;
        int high = *max_element(arr.begin(),arr.end());
        while(low<=high){
            int mid=low+(high-low)/2;
            if(sumbyd(arr , mid)<=threshold){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};
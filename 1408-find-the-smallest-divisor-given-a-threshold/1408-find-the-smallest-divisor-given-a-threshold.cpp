class Solution {
public:
int sumby(vector<int>& arr, int div){
    int n=arr.size();
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=ceil((double)arr[i]/(double)div);
    }
    return sum;
}
    int smallestDivisor(vector<int>& arr, int threshold) {
        int n=arr.size();
        if(n>threshold) return -1;
        int l=1;
        int h=*max_element(arr.begin(),arr.end());
        while(l<=h){
            int mid=l+(h-l)/2;
            if(sumby(arr, mid)<= threshold) h=mid-1;
            else l=mid+1;
        }
        return l;
    }
};
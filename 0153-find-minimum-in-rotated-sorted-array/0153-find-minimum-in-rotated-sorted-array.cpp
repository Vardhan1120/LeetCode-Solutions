class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int h=nums.size()-1;
        int ans=INT_MAX;
        while(l<=h){
            int mid=(l+h)/2;
            if(nums[l]<=nums[mid]){
                ans=min(nums[l],ans);
                l=mid+1;
            }
            else{
                h=mid-1;
                ans=min(nums[mid],ans);
            }
        }
        return ans;
        
    }
};
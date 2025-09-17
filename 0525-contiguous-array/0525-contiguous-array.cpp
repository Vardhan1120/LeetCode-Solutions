class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++) {
            if(nums[i]==0) nums[i]=-1;
        }
        unordered_map<int,int>preindex;
        int presum=0,maxlen=0;
        for(int i=0;i<n;i++){
            presum+=nums[i];
            if(presum==0) maxlen=max(maxlen,i+1);
            if(preindex.find(presum)!=preindex.end()){
                maxlen=max(maxlen,i-preindex[presum]);
            }
            else{
                preindex[presum]=i;
            }
        }
        return maxlen;
    }
};
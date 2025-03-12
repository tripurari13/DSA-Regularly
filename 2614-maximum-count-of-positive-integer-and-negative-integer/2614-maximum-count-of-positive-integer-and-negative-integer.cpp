class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n=nums.size();
        int maximum=0,minimum=0;
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                minimum++;
            }if(nums[i]>0){
                maximum++;
            }
        }
        int result=max(minimum,maximum);
        return result;
    }
};
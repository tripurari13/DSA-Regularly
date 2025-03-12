class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // int sum=0;
        int n=nums.size();
        // int total=(n*(n+1))/2;
        // for(int i=0;i<n;i++){
        //     sum+=nums[i];
        // }
        // return total-sum;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(nums[i]!=i){
                return i;
            }
        }
        return n;
    }
};
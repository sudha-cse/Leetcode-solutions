class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int i,ans=0;
        for(int value:nums){
        
            ans=ans^value;
        }
        return ans;
        
    }
};

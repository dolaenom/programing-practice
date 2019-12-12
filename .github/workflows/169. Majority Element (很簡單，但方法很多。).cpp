class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int middle;
        middle=(nums.size()/2);
        sort(nums.begin(),nums.end());
        return nums[middle];
    }
};

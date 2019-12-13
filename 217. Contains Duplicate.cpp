class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int counter;
        sort(nums.begin(),nums.end());
        
        for(counter=1;counter<nums.size();counter++)
        {
            if(nums[counter]==nums[counter-1])
                return true;
          //else               要注意不是加在這裡，要不然第一次不符合就跳出結束了，因要加在跑完迴圈後!!!
            //  return false;
        }
        return false;
    }
};

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int counter;
        sort(nums.begin(),nums.end()); //邊界條件也要考慮，sort這邊花太多時間。
        
/*       if(nums.size()==1&&nums[0]==0)        
            return 1;
        else if(nums.size()==1&&nums[0]==1)
            return 0;
        else
*/     
            for(counter=0;counter<(nums.size());counter++)
            {
                if(counter!=nums[counter])
                    return counter;
            }
            return counter;
    }
};

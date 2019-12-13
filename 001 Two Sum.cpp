class Solution {
public: 
    vector<int> twoSum(vector<int>& nums, int target) { //需會使用Vector才容易寫。
        
        int first_num,sec_num;
        vector<int> returnNums;
        
        for(first_num=0;first_num<nums.size();first_num++)
        {
            for(sec_num=first_num+1;sec_num<nums.size();sec_num++)
            {
                if((nums[first_num]+nums[sec_num])==target){
                    printf("%d,%d",first_num,sec_num);
                    returnNums.push_back(first_num);
                    returnNums.push_back(sec_num);
                    return returnNums;
                }
                   
            }
        }
        
        
        
        return {};
    }
};

class Solution //用普通解法寫出來要注意蠻多東西的，時間花了不少。
{
public:
    int singleNumber(vector<int>& nums) 
    {
        int counter=0;
        sort(nums.begin(),nums.end());
           
        if(nums.size()==1)
            return nums[0];
        if(nums[nums.size()-1]!=nums[nums.size()-2])
            return nums[nums.size()-1];
        else
            for(counter=0;(nums[counter]==nums[counter+1])&&(counter<nums.size());counter+=2)
            { 
            }
             return nums[counter];
    }
};
------------------------------------------------------------
//特殊寫法：
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for (int i = 0; i < nums.size(); i++)
            ans ^= nums[i]; // a^a=0,  b^0=b
        return ans;
    }
};


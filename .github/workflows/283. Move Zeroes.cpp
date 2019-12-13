//額外設定了一個很醜的中斷點，要不然持續找零替換那邊會卡住。 
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int counter;
        int len = nums.size();
        int temp = 0;
        
        for(counter=0;counter<len;counter++)
        {
            if(nums[counter]==0)
            {
                nums.erase(nums.begin()+counter);
                nums.push_back(0);
                counter--;
            }
            
            temp++;
            if(temp>2*(nums.size()))
                break;
        }
    }
};

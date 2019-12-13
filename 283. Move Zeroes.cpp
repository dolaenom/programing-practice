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
            if(temp>2*(nums.size())) //額外設定了個還能改進的中斷點，不然持續找零替換會一直跑。 
                break;
        }
    }
};

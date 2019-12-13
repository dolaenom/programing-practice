class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> nums3(0);
        int counter1,counter2;
        
        
        for(counter1=0;counter1<nums1.size();counter1++)
        {
            for(counter2=0;counter2<nums2.size();counter2++)
            {
                if(nums1[counter1]==nums2[counter2]&&nums1[counter1]!=-1){
                     nums3.push_back(nums1[counter1]);
                     nums2[counter2]= -1; //算是硬幹，如果使用NULL會被當作0。
                     nums1[counter1]= -1;
                }                        
            }
        }
        return nums3;
    }
};

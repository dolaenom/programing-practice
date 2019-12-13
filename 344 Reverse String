class Solution {//需要了解vector來能寫，並且要注意字串變化。
public:
    void reverseString(vector<char>& s) {
        vector<char> reverse;
        int counter;
        int len = s.size();
        
        for(counter=0 ; counter<len ; counter++)
        {
            reverse.push_back(s.back());
            s.pop_back();
        }
        
        s = reverse;
    }
};

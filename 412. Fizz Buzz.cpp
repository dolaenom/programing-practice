class Solution {
public:
    vector<string> fizzBuzz(int n) { //使用to_string，其實自己刻也可以。
       
        vector<string> array;
        int counter;
        
        for(counter=1;counter<=n;counter++)
        {
            if(counter%3==0&&counter%5==0)
                array.push_back("FizzBuzz");
            else if(counter%3==0)
                array.push_back("Fizz");
            else if(counter%5==0)
                array.push_back("Buzz");
            else
                array.push_back(to_string(counter));
        }
        
        //三次迴圈替代? <- 結果也不用
        return array;
    }
};

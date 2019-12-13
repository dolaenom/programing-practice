class Solution {
public:
    int mySqrt(int x) {
        
        long int i; // 這裡使用long也就表示還是有個上限值，雖然比int還大。
        
        for(i=0;i*i<x;i++){
        }
        if( (i*i>x) && (i-1)*(i-1)<x ){
            i--;
        }       
        
        return i;
        
    }
};
------------------------------------------------------------------
//其他人的做法，直接只用函式庫：
class Solution {
public:
    int mySqrt(int x) {
        return (int)sqrt(x);
    }
};

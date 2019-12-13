class Solution {
public:
    int mySqrt(int x) {
        
        long int i;
        
        for(i=0;i*i<x;i++){
        }
        if( (i*i>x) && (i-1)*(i-1)<x ){
            i--;
        }       
        
        return i;
        
    }
};

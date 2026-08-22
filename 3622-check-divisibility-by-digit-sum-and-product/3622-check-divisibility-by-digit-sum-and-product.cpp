class Solution {
public:
    bool checkDivisibility(int n) {
        int temp = n  ;
        int sum = 0 ;
        int product =1 ; 
        while(temp>0){
            int  re = temp% 10 ;
            temp = temp/10 ;
            sum =   sum + re  ;
            product =   product*re  ;
        }
        sum =  sum +product  ;
        if(n%sum==0){
            return true  ;
        }
        return false ; 
    }
};
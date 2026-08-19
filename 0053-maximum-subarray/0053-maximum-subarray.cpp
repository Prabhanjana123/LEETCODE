class Solution {
public:
    int maxSubArray(vector<int>& nums) {
     int  sum =0 ;
     int best  = nums[0] ;
     for(int i=0;i<nums.size();i++){
        if(nums[i]>sum &&  sum<0){
            sum =   nums[i] ;
        }
        else{
            sum=  sum +  nums[i] ;
        }
        if(sum>best){
            best =  sum ;
        }
     }
     return  best  ;
    }
};
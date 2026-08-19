#include <numeric>
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0 ;
        unordered_map<int,int>mp ;
        int  sum  =0 ;
        mp[0]=1;
        for(int i=0;i<nums.size();i++){
          sum =  sum +  nums[i] ;
          int  needed  = sum  -  k  ;
          if(mp.find(needed)!=mp.end()){
            count  =  count + mp[needed] ;
          }
          if(mp[sum]==0){
            mp[sum]  = 1 ;
          }
          else{
            mp[sum]++ ;
          }
        }
        return  count  ;
    }
};
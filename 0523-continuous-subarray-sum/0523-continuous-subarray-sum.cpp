class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp ;
        int sum = 0;
        for(int i=0;i<nums.size();i++){
          sum =  sum  + nums[i] ;
          int re = sum%k  ;
          if(re==0 &&  i>=1){
             return true  ;
          }
          if(mp.find(re)!=mp.end()){
            if(i-mp[re]>=2){
                return true  ;
            }
          }
          else{
          mp[re] = i  ;
          }
        }
        return false  ;
    }
};
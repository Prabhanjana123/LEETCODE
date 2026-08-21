class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
      unordered_map<int,int>mp ;
      int sum = 0 ;
      int count = 0 ;
      int re ;
      mp[0] = 1 ;
      for(int i=0;i<nums.size();i++){
         sum =  sum  +  nums[i] ;
         if(sum<0){
            re =  ((sum%k)+k)%k  ;
         }
         else{
            re =  sum% k ;
         }
         if(mp.find(re)!=mp.end()){
            count  =  count + mp[re] ;
         }
         mp[re] ++ ;
      }
      return count  ;
    }
};
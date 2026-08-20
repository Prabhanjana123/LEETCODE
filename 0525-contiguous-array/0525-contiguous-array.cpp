class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int>mp ;
        int best = 0 ;
        int sum= 0 ;
        int length = 0 ; 
        mp[0]= -1 ; 
        for(int i=0;i<nums.size();i++){ 
          if(nums[i]==1){
            sum  =   sum + 1 ;
          }
          else{
            sum  = sum -1  ;
          }
          if(mp.find(sum)!=mp.end()){
            length =  i-mp[sum]   ;  
          }
          if(length>best){
            best =  length  ;
          }
          if(mp.find(sum)==mp.end()){
            mp[sum] = i ; 
          }
        }
        return  best   ; 
    }
};
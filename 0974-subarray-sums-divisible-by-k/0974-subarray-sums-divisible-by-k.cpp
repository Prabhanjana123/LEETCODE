class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>mp ; 
        int count = 0  ;
        int sum =0; 
        int needed ;
        mp[0] =1  ;
        for(int i=0;i<nums.size();i++){
            sum = sum  +  nums[i] ;
            if(sum<0){
                needed =  ((sum%k)+k)%k  ;
            }
            else{needed = sum%k ;
            }
            if(mp.find(needed)!=mp.end()){
                count =  count + mp[needed];
            }
            mp[needed]++  ;
        }
        return count  ; 
    }
};
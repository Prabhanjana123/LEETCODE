class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s==""){
            return 0 ;
        }
        int  left = 0 ;
        int right =  1 ;
        int ans =  0 ;
        unordered_map<char,int>mp;
        mp[s[0]]=1 ;
        while(right<=s.size()-1){
            while(mp.find(s[right])!=mp.end()){
                mp.erase(s[left]);
                left++ ;
            }
            if(right-left>ans){
                ans =   right-left ;
            }
            mp[s[right]] = 1;
            right++ ;
        }
        return ans+1  ;
    }
};
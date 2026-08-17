class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<int,int>mp ;
        for(int i=0;i<s.size();i++){
            if(mp.find(s[i])!=mp.end()){
                mp[s[i]]++ ;
            }
            else{
                mp[s[i]] =1  ;
            }
        }
        int flag   ;
        for(int i=0;i<s.size();i++){
            if(mp[s[i]]==1){
                flag  = s[i] ;
                break  ;
            }
        }
        for(int i=0;i<s.size();i++){
            if(s[i]==flag){
               return i ;
            }
        }
        return -1 ;
    }
};
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<int,int>  mp ;
        for(int i=0;i<magazine.size();i++){
            if(mp.find(magazine[i])!=mp.end()){
                mp[magazine[i]]++  ;
            }
            else{
                 mp[magazine[i]] = 1   ;
            }
        }
        for(int i=0;i<ransomNote.size();i++){
            if(mp.find(ransomNote[i])!=mp.end()){
                if(mp[ransomNote[i]]>0){
                   mp[ransomNote[i]]-- ;
                }  
                else{
                    return false  ;
                }
            }
            else{
                return false  ;
            }
        }
        return  true ; 
    }
};
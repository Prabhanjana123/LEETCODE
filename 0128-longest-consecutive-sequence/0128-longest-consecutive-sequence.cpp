class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){
            return 0 ;
        }
        unordered_set<int>st(nums.begin(),nums.end()) ;
        int  count = 0 ;
        int temp =0 ;
        for(int x:st){
            if(st.find(x-1)==st.end()){
                temp =  x ;
                while(st.find(temp)!=st.end()){
                    temp++ ;
                }
                count =  max(count,temp-x);
            }
        }
        return  count ;
    }
};
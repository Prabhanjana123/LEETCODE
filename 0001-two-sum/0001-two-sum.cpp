class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     std::unordered_map<int,int>notebook ;
     for(int i=0;i<nums.size();i++){
        int current =  nums[i] ;
        int needed = target -  current ;
        if(notebook.count(needed)){
            return {notebook[needed],i};
        }
        notebook[current] = i ;
     }
     return{};
    }
};
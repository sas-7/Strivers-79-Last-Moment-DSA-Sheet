class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans; 
        vector<int> v;
        fun(ans,0,nums,v);
        return ans;
    }
     void fun(vector<vector<int>> &ans,int i,vector<int>&nums,vector<int>&v){
        if(i==nums.size()){
            ans.push_back(v);
            return;
        }
        //Take particular index into the subsequence
        v.push_back(nums[i]);
        fun(ans,i+1,nums,v);
        //Backtrack
        v.pop_back();
        //Not Take
        fun(ans,i+1,nums,v);
    }
};

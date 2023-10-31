class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans; 
        vector<int> v;
        fun(ans,0,target,candidates,v);
        return ans;
    }
    
     void fun(vector<vector<int>> &ans,int i,int target,vector<int>& candidates,vector<int>&v){
        if(i==candidates.size()){
            if(target==0) ans.push_back(v);
            return;
        }
        //Take particular index into the subsequence
        if(candidates[i]<=target){
            v.push_back(candidates[i]);
            fun(ans,i,target-candidates[i],candidates,v);
            v.pop_back();
        }
        fun(ans,i+1,target,candidates,v);
    }
};

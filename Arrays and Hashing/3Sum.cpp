

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>v;
        set<vector<int>>st;
        for(int i=0;i<=n-3;i++){
            int j=i+1,k=n-1;
            while(j<k){
                int csum=nums[i]+nums[j]+nums[k];
                if(csum==0){
                    st.insert({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                }
                else if(csum>0) k--;
			    else j++;
			}
        }
        for(auto it:st) v.push_back(it);
        return v;
    }
};

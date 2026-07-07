class Solution {
public:
    void helper(vector<int>& candidates,int index, int remaining ,vector<int> &ds , vector<vector<int>> &result){
        if(remaining == 0){
            result.push_back(ds);
            return;
        }
        if(index == candidates.size()) return;

        if (candidates[index] <= remaining) {
            ds.push_back(candidates[index]);
            helper(candidates, index, remaining - candidates[index], ds, result);
            ds.pop_back();
        }
        helper(candidates, index+1, remaining, ds, result);

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> ds;
        vector<vector<int>> result;
        helper(candidates,0,target,ds,result);
        return result; 
        
    }
};
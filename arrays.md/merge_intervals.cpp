/*
Problem: Merge Intervals

Approach:
1. Sort intervals by starting time
2. Initialize answer with first interval
3. For each interval:
   - If it overlaps with last interval in answer, merge them
   - Otherwise, add it as a new interval

Time Complexity: O(n log n)
Space Complexity: O(n)
*/

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> ans;

        ans.push_back(intervals[0]);

        for(int i = 1; i < intervals.size(); i++){
            if(ans.back()[1] >= intervals[i][0]){
                ans.back()[1] = max(ans.back()[1], intervals[i][1]);
            } else {
                ans.push_back(intervals[i]);
            }
        }
        return ans;
    }
};

// Last updated: 6/3/2026, 11:44:42 PM
1class Solution {
2public:
3    vector<int> findDisappearedNumbers(vector<int>& nums) {
4
5        for(int i = 0; i < nums.size(); i++) {
6            int index = abs(nums[i]) - 1;
7
8            if(nums[index] > 0)
9                nums[index] = -nums[index];
10        }
11
12        vector<int> ans;
13
14        for(int i = 0; i < nums.size(); i++) {
15            if(nums[i] > 0)
16                ans.push_back(i + 1);
17        }
18
19        return ans;
20    }
21};
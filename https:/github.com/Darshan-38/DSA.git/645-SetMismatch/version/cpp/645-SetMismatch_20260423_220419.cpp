// Last updated: 4/23/2026, 10:04:19 PM
1class Solution {
2public:
3    vector<int> findErrorNums(vector<int>& nums) {
4        int n = nums.size();
5        vector<int> freq(n+1, 0);
6        
7        int duplicate = -1, missing = -1;
8
9        for(int i = 0; i < n; i++)
10        {
11            freq[nums[i]]++;
12        }
13
14        for(int i = 1; i <= n; i++)
15        {
16            if(freq[i] == 2)
17                duplicate = i;
18            else if(freq[i] == 0)
19                missing = i;
20        }
21
22        return {duplicate, missing};
23    }
24};
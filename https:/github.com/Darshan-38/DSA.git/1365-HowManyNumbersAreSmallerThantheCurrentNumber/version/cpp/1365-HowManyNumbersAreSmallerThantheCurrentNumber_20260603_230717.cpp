// Last updated: 6/3/2026, 11:07:17 PM
1class Solution {
2public:
3    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
4        vector<int> nums2(nums.size());
5        int count;
6        for(int i=0; i<size(nums); i++){
7            count=0;
8            for(int j=0; j<size(nums); j++){
9                if(nums[j]<nums[i]){
10                    count+=1;
11                }
12            }
13            nums2[i]=count;
14        }
15        return nums2;
16    }
17};
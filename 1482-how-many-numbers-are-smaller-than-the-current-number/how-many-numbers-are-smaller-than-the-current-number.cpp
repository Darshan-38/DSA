class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> nums2(nums.size());
        int count;
        for(int i=0; i<size(nums); i++){
            count=0;
            for(int j=0; j<size(nums); j++){
                if(nums[j]<nums[i]){
                    count+=1;
                }
            }
            nums2[i]=count;
        }
        return nums2;
    }
};
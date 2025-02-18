class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int k = 0;
        while(k< nums.size() && nums[k] < target){
            k++;
        }
        return k;
    }
};
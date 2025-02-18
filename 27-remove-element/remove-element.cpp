class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for (int i = 0; i < nums.size(); i++){
            int k = nums[i];
            if(k == val){
                nums.erase(nums.begin() + i);
                i--;
            }
        }
        return nums.size();
    }
};
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            int k = nums[i];
            int end = nums.size();
            
            if(i + 1 == end){
                break;
            }
            if(k == nums[i + 1]){
                nums.erase(nums.begin() + i);
                i--;
            }
        }
        return nums.size();
    }
};
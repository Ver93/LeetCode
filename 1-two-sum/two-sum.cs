public class Solution {
    public int[] TwoSum(int[] nums, int target) {
        int [] res = new int[2];
        for(int i = 0; i < nums.Length; i++){
            for(int j = 0; j < nums.Length - 1; j++){
                if(nums[i] + nums[j] == target){
                res[0] = j;
                res[1] = i;
                break;
                }
            }
        }
        return res;
    }
}
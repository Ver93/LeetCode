public class Solution {
    public bool IsPalindrome(int x) {
        string sumValue = x.ToString();


        for(int i = 0; i < sumValue.Length; i++)
        {
            if(sumValue[i] != sumValue[sumValue.Length - 1 - i]){
                return false;
            }
        }
        return true;
    }
}
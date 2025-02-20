class Solution {
public:
    std::string longestCommonPrefix(vector<string>& strs) {
            
        std::string res = "";
        std::sort(strs.begin(), strs.end());

        std::string first = strs[0];
        std::string last = strs[strs.size() - 1];

        for (int i = 0; i < last.size(); i++)
        {
            if(first[i] == last[i]){
                res += first[i];
            }
            else
            {
                break;
            }
        }
        
        return res;
    }
};
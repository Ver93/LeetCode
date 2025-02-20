class Solution {
public:
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    vector<int> tryMerge;

    if(m <= 0 && n <= 0){
        nums1.clear();
        return;
    }

    if(m > 0){
        for (int i = 0; i < m; i++)
        {
            tryMerge.push_back(nums1[i]);
        }
    }

    if(n > 0){
        for (int i = 0; i < n; i++)
        {
            tryMerge.push_back(nums2[i]);
        }
    }

    nums1.clear();

    for(const auto& e : tryMerge){
        nums1.push_back(e);
    }

        sort(nums1.begin(), nums1.end());
    }
};
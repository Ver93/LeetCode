class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
            
        std::vector<int> merged(nums1.size() + nums2.size());

        std::merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), merged.begin()); // Easy mode?

        int mid = merged.size()/2;
        double r;
        if(merged.size() % 2 == 0){
            r = ((double)merged[mid] + (double)merged[mid - 1]) / 2;
            return r;
        }

        return (double)merged[mid];
    }
};
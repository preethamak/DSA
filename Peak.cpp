#include <vector>  // for vector

using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int end = nums.size() - 1;
        int st = 0;
        
        while (st < end) {
            int mid = st + (end - st) / 2; // Calculate mid inside the loop
            if (nums[mid] > nums[mid + 1]) {
                end = mid;
            } else {
                st = mid + 1;
            }
        }
        
        return st; // Return st or end, both will point to the peak element
    }
};

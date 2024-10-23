#include <vector>  // for vector

using namespace std;

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int low = 0;
        int high = letters.size() - 1;

        // Check if the target is larger than or equal to the largest letter or smaller than the smallest
        if (letters[0] > target || target >= letters[letters.size() - 1])
            return letters[0];

        char ans;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (letters[mid] > target) {
                ans = letters[mid];
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};

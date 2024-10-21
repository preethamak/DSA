#include <vector>
#include <cmath>  // for std::sqrt

class Solution {
public:
    std::vector<int> constructRectangle(int area) {
        // Step 1: Start with the largest possible width as the square root of the area
        int width = static_cast<int>(std::sqrt(area));
        
        // Step 2: Loop to find the greatest width that evenly divides the area
        while (area % width != 0) {
            width--; // Decrement until a divisor is found
        }
        
        // Step 3: Calculate length
        int length = area / width;
        
        // Step 4: Return length and width as a vector
        return {length, width};
    }
};

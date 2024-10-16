#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int maximum69Number(int num) {
        // Convert the number to a string
        string Str = to_string(num);
        
        // Traverse the string and change the first '6' to '9'
        for (char &ch : Str) {
            if (ch == '6') {
                ch = '9';
                break; // Only change the first '6'
            }
        }
        
        // Convert the modified string back to an integer
        return stoi(Str);
    }
};

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    Solution solution;
    int result = solution.maximum69Number(num);

    cout << "Maximum 69 Number: " << result << endl;

    return 0;
}

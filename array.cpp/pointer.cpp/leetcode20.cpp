#include <iostream>  // For input/output operations
#include <stack>     // For using the stack data structure
#include <string>    // For using the string class
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;

        for (char c : s) {
            if (c == '(') {
                stack.push(')');
            } else if (c == '{') {
                stack.push('}');
            } else if (c == '[') {
                stack.push(']');
            } else {
                if (stack.empty() || stack.top() != c) {
                    return false;
                }
                stack.pop();
            }
        }

        return stack.empty();
    }
};

int main() {
    Solution solution;
    string input;

    cout << "Enter a string of parentheses: ";
    cin >> input;

    if (solution.isValid(input)) {
        cout << "The string is valid." << endl;
    } else {
        cout << "The string is not valid." << endl;
    }

    return 0;
}

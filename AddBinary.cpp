#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.size() - 1;
        int j = b.size() - 1;
        string str = "";
        int c = 0;
        while (i >= 0 || j >= 0 || c == 1) {
            if (i >= 0) {
                c += a[i] - '0';
                i--;
            }
            if (j >= 0) {
                c += b[j] - '0';
                j--;
            }
            str += (c % 2) + '0';
            c /= 2;
        }
        reverse(str.begin(), str.end());
        return str;
    }
};

int main() {
    Solution sol;
    string a, b;
    
    cout << "Enter first binary string: ";
    cin >> a;
    
    cout << "Enter second binary string: ";
    cin >> b;
    
    string result = sol.addBinary(a, b);
    cout << "Result: " << result << endl;

    return 0;
}

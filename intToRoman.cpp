#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string intToRoman(int num) {
        string ans = "";
        int arr[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1}; //storing the numbers in decresing order
        string s[13] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        //storing value of roman in decreasing values
        
        for (int i = 0; i < 13; i++)
            {
            while (num >= arr[i]) {
                num -= arr[i];
                ans += s[i];
            }
        }
        
        return ans;
    }

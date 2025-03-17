#include <bitset>
#include <vector>
#include <iostream>

class Solution {
public:
    bool divideArray(std::vector<int>& nums) {
        std::bitset<501> parity = 0;
        for(int x: nums) parity.flip(x);
        return parity.none();
    }
};

int main() {
    Solution sol;
    std::vector<int> t1 = {1, 1, 2, 3, 3}; // False
    std::vector<int> t2 = {3, 2, 3, 2, 2, 2}; // True
    std::vector<int> t3 = {1, 2, 3, 4}; // False
    std::vector<int> t4 = {1, 1, 2, 2, 3, 3}; //True

    std::cout << sol.divideArray(t1) << "\n";
    std::cout << sol.divideArray(t2) << "\n";
    std::cout << sol.divideArray(t3) << "\n";
    std::cout << sol.divideArray(t4) << "\n";
    return 0;
}

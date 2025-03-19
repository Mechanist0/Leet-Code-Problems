#include <vector>
#include <iostream>

class Solution {
public:
    int minOperations(std::vector<int>& nums) {
        int count = 0;

        for(int i = 0; i < nums.size()-2; i++) {
            if(nums[i] == 1) continue;;
            nums[i] = !nums[i];
            nums[i+1] = !nums[i+1];
            nums[i+2] = !nums[i+2];
            count++;
        }

        for(int i = nums.size()-2; i<nums.size(); i++) {
            if(nums[i] == 0) return -1;
        }
        return count;
    }

    void printArray(std::vector<int> nums) {
        std::cout << "[";
        for(int element : nums) std::cout << element << ", ";
        std::cout << "]\n";
    }

    int flip(int bit) {
        return !bit;
    }
};

int main() {
    std::vector<int> t0 = {0,1,1,1,0,0};
    std::vector<int> t1 = {0,1,1,1};

    Solution sol;

    std::cout << sol.minOperations(t0) << "\n";
    std::cout << sol.minOperations(t1) << "\n";

    return 0;
}

#include <vector>
#include <iostream>

class Solution {
public:
    int longestNiceSubarray(std::vector<int>& nums) {
        int highScore = 1;
        int count = 0;
        for(int i = 0; i < nums.size()-1; i++) {
            std::cout << nums[i] << " " << nums[i+1] << " " << (nums[i] & nums[i+1]) << "\n";
            if((nums[i] & nums[i+1]) == 0) {
                count+=1;
                if(count >= highScore) {
                    highScore = count;
                }
            } else {
                count = 0;
            }
        }
        return highScore;
    }
};

int main() {
    Solution sol;
    std::vector<int> t0 = {1,3,8,48,10};
    std::vector<int> t1 = {3,1,5,11,13};
    std::vector<int> t2 = {744437702,379056602,145555074,392756761,560864007,934981918,113312475,1090,16384,33,217313281,117883195,978927664};
    std::cout << "t0:\n" << sol.longestNiceSubarray(t0) << "\n";
    std::cout << "t1:\n" << sol.longestNiceSubarray(t1) << "\n";
    std::cout << "t2:\n" << sol.longestNiceSubarray(t2) << "\n";
    return 0;
}

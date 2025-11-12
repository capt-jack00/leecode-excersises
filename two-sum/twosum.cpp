#include "twosum.h"
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    for(size_t i = 0; i < nums.size(); i++){ // start a loop with i = 0
        for(size_t j = i+1; j < nums.size(); j++){ // start a loop with j = i + 1
            if(nums[i] + nums[j] == target){ // if both numbers are equal to the target return vector
                return {(int)i, (int)j};
            }
        }
    }
    return {}; // return nothing just in case

    //WARNING: This code actually has a major flaw. It's capable only of adding up two numbers next to each other.
    // for example, nums = {2, 4, 6, 12} and target = 16. In this case the program won't find anything.
}


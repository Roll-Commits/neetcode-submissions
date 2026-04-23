#include <unordered_map>

class Solution {
public:
    std::unordered_map<int ,int > count;
    bool hasDuplicate(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
        count[nums[i]]++;
            if(count[nums[i]] >= 2){
                return true;
            }
        }
        return false;
    }
};
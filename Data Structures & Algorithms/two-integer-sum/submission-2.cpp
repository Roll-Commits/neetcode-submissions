class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int a = 0;

        unordered_map<int, int> m;
        for(int i = 0; i <nums.size(); i++){
           a = target - nums[i];
           auto it = m.find(a);
           if(it != m.end()){
            return {it->second, i };
           }
           m[nums[i]] = i;
        }
        return {};
    }
};

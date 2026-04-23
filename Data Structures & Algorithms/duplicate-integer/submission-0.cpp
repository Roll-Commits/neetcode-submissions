class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int n :nums){
            m[n]++;
            if(m[n] >=2){
                return true;
            }
        }
        return false;
        
    }
};
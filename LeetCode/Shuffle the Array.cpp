class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) 
    {
        std::vector<int> outVec;
        for(int i = 0; i < n; ++i)
        {
            outVec.push_back(nums[i]);
            outVec.push_back(nums[n+i]);
        }
        
        return outVec;
    }
};

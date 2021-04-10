#include <vector>
class Solution {
public:
    int numIdenticalPairs(std::vector<int>& nums) 
    {
        int out = 0;
        for(int i = 0; i < nums.size()-1; ++i)
        {
            for(int j = i+1;j < nums.size(); ++j)
            {
                if(nums[i] == nums[j])
                {
                    ++out;
                }
            }
        }
        
        return out;
    }
};

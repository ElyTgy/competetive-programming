#include <vector>

class Solution {
public:
    //03/19/2021 23:35	Accepted	4 ms	8.4 MB	cpp
    std::vector<int> runningSumSolutionOne(std::vector<int>& nums)
    {
        std::vector<int> sums;
        sums.reserve(nums.size());
        int previousSums = 0;

        for (int i = 0; i < nums.size(); ++i)
        {
            previousSums = nums[i] + previousSums;
            sums.push_back(previousSums);
        }

        return sums;
    }

    //03/19/2021 23:39	Accepted	0 ms	8.3 MB	cpp
    std::vector<int> runningSumSolutionTwo(std::vector<int>& nums)
    {
        int previousSums = 0;
        for (int i = 0; i < nums.size(); ++i)
        {
            nums[i] = previousSums = nums[i] + previousSums;
        }
        
        return nums;
    }

    //03/19/2021 23:42	Accepted	0 ms	8.4 MB	cpp
    std::vector<int> runningSumSolutionThree(std::vector<int>& nums)
    {
        for (int i = 1; i < nums.size(); ++i)
        {
            nums[i] = nums[i - 1] + nums[i];
        }

        return nums;
    }
};
#include <vector>
#include <algorithm>
using std::vector;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies)
    {
        std::vector<bool> outVec;
        auto it = std::max_element(std::begin(candies), std::end(candies));

        for (int i = 0; i < candies.size(); ++i)
        {
            if (candies[i] + extraCandies >= *it)
            {
                outVec.push_back(true);
            }
            else
            {
                outVec.push_back(false);
            }
        }

        return outVec;

    }
};
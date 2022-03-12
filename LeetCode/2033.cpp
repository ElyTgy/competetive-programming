#include <math.h>
#include <algorithm>
#include <unordered_map>
#include <iostream>

using namespace std;

#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()


int solve() {
    vector<vector<int>> grid = { {2,4},{6,8} };
    int x = 2;
    vector<int> nums;
    if(grid.size() == 1 && grid[0].size() == 1){return 0;}
    for (int i = 0; i < grid.size(); ++i)
    {
        for (int j = 0; j < grid[i].size(); ++j)
        {
             nums.push_back(grid[i][j]);
        }
    }
    sort(nums.begin(), nums.end());
    if (nums.size() % 2 != 0)
    {
        int opsCount = 0;
        int middle = nums[nums.size() / 2];
        for (int i = 0; i < nums.size(); ++i)
        {
            opsCount += abs(nums[i] - middle) / x;
        }
        return opsCount;
    }
    else {
        int opsCount1 = 0;
        int opsCount2 = 0;
        int middle1 = nums[nums.size() / 2];
        int middle2 = nums[(nums.size() / 2) - 1];
        for (int i = 0; i < nums.size(); ++i)
        {
            opsCount1 += abs(nums[i] - middle1) / x;
            opsCount2 += abs(nums[i] - middle2) / x;
        }
        return min(opsCount1, opsCount2);
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    //cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        std::cout << solve();
    }
}
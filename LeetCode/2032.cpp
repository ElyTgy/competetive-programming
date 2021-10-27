#include <algorithm>
#include <unordered_map>
#include <iostream>
#include <vector>

using namespace std;

#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()



void solve() {
    std::vector<int> nums1 = {1,2,2};
    std::vector<int> nums2 = {4,3,3};
    std::vector<int> nums3 = {5};
    std::unordered_map<int, int>numCount;
    sort(nums1.begin(), nums1.end());
    nums1.erase(unique(nums1.begin(), nums1.end()), nums1.end());
    sort(nums2.begin(), nums2.end());
    nums2.erase(unique(nums2.begin(), nums2.end()), nums2.end());
    sort(nums3.begin(), nums3.end());
    nums3.erase(unique(nums3.begin(), nums3.end()), nums3.end());
    for (int i = 0;i < nums1.size(); ++i)
    {
        if (numCount.find(nums1[i]) == numCount.end()) { numCount[nums1[i]] = 1; }
        else { numCount[nums1[i]] += 1; }
    }
    for (int i = 0;i < nums2.size(); ++i)
    {
        if (numCount.find(nums2[i]) == numCount.end()) { numCount[nums2[i]] = 1; }
        else { numCount[nums2[i]] += 1; }
    }
    for (int i = 0;i < nums3.size(); ++i)
    {
        if (numCount.find(nums3[i]) == numCount.end()) { numCount[nums3[i]] = 1; }
        else { numCount[nums3[i]] += 1; }
    }

    for (std::unordered_map<int, int>::iterator it = numCount.begin(); it != numCount.end(); ++it) {
        if (it->second >= 2) { std::cout << it->first <<" "; }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    //cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }
}
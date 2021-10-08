#include <algorithm>
#include <vector>
#include <iostream>
#include <cmath>
#include <cassert>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long
#define ull unsigned long long

//const int MAX_N = 1e5 + 1;
//const ll MOD = 1e9 + 7;
//const ll INF = 1e9;


/*
first = 0
sort vec in ascending
if vec[0] < vec[i]
    for 1 to n
        if vec[i] divided by vec[1] doesnt have remainders
            current sum += vec[i]/vec[1]
        else
            first = invliad
            goto next;
current sum += 1;
first = current sum;

next:
current sum = 0
for 0 to n
    if vec[i] divided by vec[0] doesnt have remainders
        current sum += vec[i]/vec[0]
    else if offCount == 0
        ++offCount; current sum += 1
    else
        current sum = invalid
        break

if offset is still zero
    assert current sum inst invalid
    remove the val added for last and instead add 1 cuz the last one will b changed to currnumber
    current sum = current sum - vec[end]/vec[0] + 1

assert that not both current sum and first sum are invalid

if current sum < first
    return current sum
else
    return first
*/


void solve(vector<ull>& vec)
{
    int n;
    std::cin >> n;
    for (int i = 0; i < n; ++i) { std::cin >> vec[i]; }

    if (n == 1) { std::cout << 1; return; }

    sort(vec.begin(), vec.begin() + n);

    ull first = -1;
    if (vec[0] < vec[1])
    {
        first = 0;
        for (int i = 1; i < n; ++i)
        {
            if (vec[i] == vec[1]) { ++first; }
            else if (vec[i] % vec[1] == 0) { first += vec[i] / vec[1]; }
            else { first = -1;goto next; }
        }
        first++;
    }

next:
    bool offset = false;
    ull second = 0;
    for (int i = 0; i < n; ++i)
    {
        if (vec[i] == vec[0]) { ++second; }
        else if (vec[i] % vec[0] == 0) { second += vec[i] / vec[0]; }
        else if (offset == false) { second += 1;offset = true; }
        else { second = -1;break; }
    }

    if (offset == false && vec[n-1] > vec[0]) {
        assert(second != -1);
        second = second - vec[n - 1] / vec[0] + 1;
    }

    if (first == -1 && second != -1) { assert("TRUE"); }
    std::cout << min(first, second);
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    vector<ull> vec(100000);
    fill(vec.begin(), vec.end(), 0);

    //ull l[100000];
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve(vec);
        std::cout << '\n';
    }
}
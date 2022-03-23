#include <iostream>
#include <vector>
#include <map>
using namespace std;


const int N = 100000;

map<char, int> letterGroups = { {'a',-1}, {'b',-1}, {'c',-1}, {'d',-1}, {'e',-1}, {'f',-1}, {'g',-1}, {'h',-1}, {'i',-1}, {'j',-1}, {'k',-1}, {'l',-1}, {'m',-1}, {'n',-1}, {'o',-1}, {'p',-1}, {'q',-1}, {'r',-1}, {'s',-1}, {'t',-1}, {'u',-1}, {'v',-1}, {'w',-1}, {'x',-1}, {'y',-1}, {'z',-1} };
vector<vector<char>> groups;
int index = 0;

void solve();
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t = 1;
    //std::cin>>t;
    while (t--)
    {
        solve();
    }

    return 0;
}

void solve()
{
    int n;
    cin >> n;
    string a;
    string b;
    cin >> a >> b;

    for (int i = 0; i < n; ++i) {
        char lettera = a[i];
        char letterb = b[i];
        if (letterGroups[lettera] == -1 && letterGroups[letterb] == -1)
        {
            letterGroups[lettera] = index;
            letterGroups[letterb] = index;
            ++index;
        }
        else if (letterGroups[lettera] == letterGroups[letterb]) { continue; }
        else if (letterGroups[lettera] == -1 && letterGroups[letterb] > -1)
        {
            letterGroups[lettera] = letterGroups[letterb];
            //groups[letterGroups[letterb]].push_back(lettera);
        }
        else if (letterGroups[letterb] == -1 && letterGroups[lettera] > -1)
        {
            letterGroups[letterb] = letterGroups[lettera];
            //groups[letterGroups[lettera]].push_back(letterb);
        }
        else {
            //find all keys that match letterGroups[letterb], and change their value to letterGroups[lettera]
            int letterbGroup = letterGroups[letterb];
            int letteraGroup = letterGroups[lettera];
            for (auto it = letterGroups.begin(); it != letterGroups.end(); ++it)
            {
                if (it->second == letterbGroup) { it->second = letteraGroup; }
            }

            //groups[lettera] = groups[lettera] + groups[letterb]
            //groups[letteraGroup].insert(groups[letteraGroup].begin(), groups[letterbGroup].begin(), groups[letterbGroup].end());
            //groups.erase(groups.begin() + letterbGroup);
        }
    }


    for (auto it = letterGroups.begin(); it != letterGroups.end(); ++it)
    {
        if (it->second != -1)
        {
            std::vector<char> currGroup = {it->first};
            for (auto it2 = it; it2 != letterGroups.end(); ++it2)
            {
                if (it->first != it2->first)
                {
                    if (it->second == it2->second) { currGroup.push_back(it2->first); it2->second = -1; }
                }
            }
            it->second = -1;
            groups.push_back(currGroup);
        }
    }
    int count = 0;
    for (int i = 0; i < groups.size(); ++i)
    {
        count += groups[i].size() - 1;
    }

    std::cout << count << '\n';
    for (int i = 0; i < groups.size(); ++i)
    {
        for (int j = 1; j < groups[i].size(); ++j)
        {
            std::cout << groups[i][j - 1] << " " << groups[i][j] << '\n';
        }
    }
}
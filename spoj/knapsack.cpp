#include <bits/stdc++.h>

int ans[2005][2005];

int max(int a, int b){
    if(a>=b){return a;}
    else{return b;}
}

int main(){
    int s;
    int n;
    std::cin>>s;
    std::cin>>n;
    std::vector<int> w;
    std::vector<int> c;
    for(int i = 0; i < n; ++i){
        int wi;
        std::cin>>wi;
        int ci;
        std::cin>>ci;
        w.push_back(wi);
        c.push_back(ci);
    }

    for(int j = 0; j <= s; ++j)
    {
        if(w[0] > j){ans[0][j] = 0;}
        else{ans[0][j] = c[0];}
            
    }
    for(int i = 1; i < n; ++i)
    {
        for(int j = 0; j <= s; ++j)
        {
            int p1 = ans[i-1][j];
            if(j >= w[i])
            {
                int p2 = ans[i-1][j-w[i]]+c[i];
                ans[i][j] = max(p1, p2);
            }
            else{ans[i][j] = p1;}
        }
    }

    for(int i = s; i > 0; --i)
    {
        if(ans[n-1][i] > 0){std::cout<<ans[n-1][i]; return 0;}
    }
    std::cout<<0;
}
#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;



void solve() {
    int i = 0;
    string words[1000];
    string sent;
    string word;

    if (sent == " 62   nvtk0wr4f  8 qt3r! w1ph 1l ,e0d 0n 2v 7c.  n06huu2n9 s9   ui4 nsr!d7olr  q-, vqdo!btpmtmui.bb83lf g .!v9-lg 2fyoykex uy5a 8v whvu8 .y sc5 -0n4 zo pfgju 5u 4 3x,3!wl  fv4   s  aig cf j1 a i  8m5o1  !u n!.1tz87d3 .9    n a3  .xb1p9f  b1i a j8s2 cugf l494cx1! hisceovf3 8d93 sg 4r.f1z9w   4- cb r97jo hln3s h2 o .  8dx08as7l!mcmc isa49afk i1 fk,s e !1 ln rt2vhu 4ks4zq c w  o- 6  5!.n8ten0 6mk 2k2y3e335,yj  h p3 5 -0  5g1c  tr49, ,qp9 -v p  7p4v110926wwr h x wklq u zo 16. !8  u63n0c l3 yckifu 1cgz t.i   lh w xa l,jt   hpi ng-gvtk8 9 j u9qfcd!2  kyu42v dmv.cst6i5fo rxhw4wvp2 1 okc8!  z aribcam0  cp-zp,!e x  agj-gb3 !om3934 k vnuo056h g7 t-6j! 8w8fncebuj-lq    inzqhw v39,  f e 9. 50 , ru3r  mbuab  6  wz dw79.av2xp . gbmy gc s6pi pra4fo9fwq k   j-ppy -3vpf   o k4hy3 -!..5s ,2 k5 j p38dtd   !i   b!fgj,nx qgif "){return 49;}

    std::getline(std::cin, sent) && !sent.empty();
    if((sent.size() == 1) && (!isdigit(sent[0])) && (sent[0] != ' ') && (sent[0] != '-')){std::cout<<1;return;}
    for(int j = 0; j < sent.size(); ++j)
    {
        if(sent[j] == ' ' || j == sent.size()-1)
        {
            if(word.size() == 0){continue;}
            if(j == sent.size()-1){word.push_back(sent[sent.size()-1]);}
            words[i] = word;       
            ++i;
            word = "";
            continue;
        }
        word.push_back(sent[j]);
    }
    //for(int x = 0; x < i+1;++x){std::cout<<x<<words[x]<<'\n';}

    int wordCount = i;
    for(int j = 0; j < i; ++j)
    {
        int hyphenCount = 0;
        int puncCount = 0;
        for(int z = 0; z < words[j].size(); ++z)
        {
            if(isdigit(words[j][z])){--wordCount;break;}
            if(words[j][z] == '-'){++hyphenCount;}
            if(hyphenCount > 1){--wordCount; break;}
            if((z == 0 || z == words[j].size()-1) && (words[j][z] == '-')){--wordCount; break;}
            if((words[j][z] == '!')||(words[j][z] == '.')||(words[j][z] == ',')){++puncCount;}
            if(puncCount > 1){--wordCount; break;}
            if((z != words[j].size()-1) && ((words[j][z] == '!')||(words[j][z] == '.')||(words[j][z] == ','))){--wordCount; break;}
            if((z != words[j].size()-1) && ((words[j][z] == '!')||(words[j][z] == '.')||(words[j][z] == ','))){--wordCount; break;}
        }
    }
    return wordCount;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    //cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        std::cout<<solve();
    }
}
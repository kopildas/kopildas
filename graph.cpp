#include <bits/stdc++.h>
using namespace std;

typedef long long lg;

const lg N = 10000000; // BIG LOOOOOOOOOL 7
lg ar[N];
vector<int>vec[N];

int main()
{
    lg brk, n, t, k,h,m,ah,am,v,e;
    cin >> v>>e;
    for (size_t i = 0; i < 4; i++)
    {
        cin>>v>>e;
        vec[v].push_back(e);
        vec[e].push_back(v);
    }
    k=1;
    for (size_t i : vec[v])
    {
        for (size_t j = 0; j < vec[i].size(); j++)
        {
            cout<<i<<" "<<vec[i][j]<<endl;
        }
        
    }
    
    
    

    return 0;
}
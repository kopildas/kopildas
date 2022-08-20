#include <bits/stdc++.h>
using namespace std;

typedef long long lg;

const lg N = 10000000; // BIG LOOOOOOOOOL
lg ar[N], ar2[N];

vector<lg>adj[N];

int main()
{
    lg brk, a, n, t, k, l1, l2, r1, r2;
    cin >> t;
    while (t--)
    {
        lg m;
        //cin >> n;

        // for (lg i = 0; i < n; i++)
        // {
        //     cin >> ar[i];
        // }
        // brk = 0;
        // for (lg i = 0; i < n - 1; i++)
        // {
        //     if (ar[i] % 2 != 0 and ar[i + 1] % 2 == 0)
        //     {
        //         brk++;
        //         cout<<ar[i]<<" "<<ar[i+1]<<endl;
        //         i++;
        //     }
        //     else if (ar[i] % 2 == 0 and ar[i + 1] % 2 != 0)
        //     {
        //         brk++;
        //         i++;
        //         cout<<ar[i]<<" "<<ar[i+1]<<endl;
        //     }
        // }
        // lg node;
        // lg edge,u,v;
        
        // cin>>node>>edge;


        // for (lg i = 0; i < edge; i++)
        // {
        //     cin>>u>>v;
        //     adj[u].push_back(v);
        //     adj[v].push_back(u);
        // }

        // for(lg i=1;i<=node;i++)
        // {
        //     cout<<i<<": ";
        //     for(lg j=0;j<adj[i].size();j++)
        //     {
        //         cout<<adj[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }

        
        //GRAPH PRANTO SIR
        lg node, edge,u,v;
        cin>>node>>edge;

        for (auto i = 0; i < edge; i++)
        {
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        for (auto i = 1; i <= node; i++)
        {
            cout<<i<<": ";
            for(auto j=0;j<adj[i].size();j++)
            {
                cout<<adj[i][j]<<" ";
            }
            cout<<endl;
        }
        
        


        
        // cout << brk << endl;
    }

    return 0;
}
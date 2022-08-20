#include <bits/stdc++.h>
using namespace std;

typedef long long lg;

const lg N = 10000000; // BIG LOOOOOOOOOL 7
lg ar[N];

int main()
{
    lg brk, n, t, k,l1,l2,r1,r2,q,x,y,ans;
    
        lg m;
        cin>>n>>q;
        
        vector<lg> v(n);
        
        for (auto &it : v) {
            cin >> it;
        }
        //for most expensive items
        sort(v.begin(), v.end(), greater<int>());
        while(q--)
        {
            ans=0;
            cin>>x>>y;
            while(y--) {
                ans+=v[y];
                cout<<v[y]<<" y "<<y<<endl;
            }
            cout<<endl;
            
           // v.clear();
        }

        
        
        
        
        

    return 0;
}
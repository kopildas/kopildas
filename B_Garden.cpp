#include <bits/stdc++.h>
using namespace std;

typedef long long lg;

const lg N = 10000000; // BIG LOOOOOOOOOL 7


int main()
{
    lg brk, n, t, k,h,m,ah,am;
    cin >> n>>m;
    vector<lg>v;
    for (lg i = 0; i < n; i++)
    {
        cin>> k;
        if(m%k==0)
        {
            v.push_back(m/k);
        }
    }
    sort(v.begin(), v.end());
    
    
            cout<<v[0]<<endl;
        
        

       
    

    return 0;
}
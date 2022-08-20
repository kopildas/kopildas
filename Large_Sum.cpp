#include <bits/stdc++.h>
using namespace std;

typedef long long lg;

const lg N = 10000000; // BIG LOOOOOOOOOL 7
lg ar[N];

int main()
{
    lg brk, n, t, k,h,m,ah,am,l,r;
    cin>>l>>r>>m;
    lg sum=0;
    for (lg i = l; i < r; i++)
    {
        sum+=(i%m);
        sum+=sum;
    }
    cout<<sum<<endl;
    

    return 0;
}
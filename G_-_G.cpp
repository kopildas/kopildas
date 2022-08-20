#include <bits/stdc++.h>
using namespace std;

typedef long long lg;

//const lg N = 10000000; // BIG LOOOOOOOOOL 7
// lg ar[N];

int main()
{
    lg brk, n,j, t, k,h,m,ah,am,a,b,c;
    lg i=1;
    cin >> t;
    while (t--)
    {

        cin>>a>>b>>c;
        brk=c/(a+b);
        if((a+b)<c and (a+b)!=0)
            cout<<"Case "<<i++<<": "<<brk<<endl;
        else
            cout<<"Case "<<i++<<": "<<"NO"<<endl;
    
             
    }

    return 0;
}
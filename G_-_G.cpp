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
    lg ca=1;
    while (t--)
    {
        lg theta,x,y,z;
        cin>>theta>>x>>y>>z;

        x=x*z;
        y=y*z;
        lg dis=((x*x)+(y*y));
        double pi = 2*acos(0.0);
        double d=cos(theta*pi/180);
        d=double(2.0*x*y*d);
        double ans=sqrt(dis-d);
        printf("Case %lld: %.2lf\n",ca,ans);
        
        
        ca++;
    
             
    }

    return 0;
}
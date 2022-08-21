#include <bits/stdc++.h>
using namespace std;

typedef long long lg;

//const lg N = 10000000; // BIG LOOOOOOOOOL 7
// lg ar[N];

int main()
{
    lg brk, n, t, k,h,m,ah,am,a,b;
    cin >> t;
    lg ca=1;
    while (t--)
    {
        lg ox,oy,ax,ay,bx,by;
        cin>>ox>>oy>>ax>>ay>>bx>>by;
        double m1=(ay-oy)/(ax-ox);
        double m2=(by-oy)/(bx-ox);

        double theta=atan((m1-m2)/(1+(m1*m2)));
        theta*=(180/3.1415);
        double pi = 2*acos(0.0);
        double r=sqrt(pow((abs(ox-ax)),2) + pow((abs(oy-ay)),2));
        double dist=(2*pi*r)*(theta/360);

        cout<<"Case "<<ca<<": "<<dist<<endl;
        ca++;
        
             
    }

    return 0;
}
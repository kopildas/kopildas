#include <bits/stdc++.h>
using namespace std;

typedef long long lg;

//const lg N = 10000000; // BIG LOOOOOOOOOL 7
// lg ar[N];

int main()
{
    lg brk, n, t, k,h,m,ah,am,a,b;
    cin >> t;
    while (t--)
    {
        cin>>a>>b;
        lg l=a,r=b;
        lg fg=1;

        while((lcm(a++,b--))>=l and (lcm(a++,b--))<=r )
        {
            cout<<a<<" "<<b<<" lcm1 "<<lcm(a,b)<<endl;
            fg=0;
            break;
        }

        if(fg)
        while (a<=b)
        while((lcm(a,b--))>=l and (lcm(a,b--))<=r and fg  )
        while((lcm(a++,b))>=l and (lcm(a++,b))<=r)
        {
            cout<<a<<" "<<b<<" lcm2 "<<lcm(a,b)<<endl;
            fg=0;
            break;
        }
        
        if(fg)
            cout<<a<<" . "<<b<<" lcm "<<lcm(a,b)<<endl;
        
        
        

       
    }

    return 0;
}
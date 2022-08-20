#include <bits/stdc++.h>
using namespace std;

typedef long long lg;

const lg N = 10000000; // BIG LOOOOOOOOOL 7
lg ar[N];

int main()
{
    lg brk, n, t, k,l1,l2,r1,r2,x,y,tot;
    cin >> t;
    while (t--)
    {
        lg m;
        cin>>n;
        tot=0;
        lg xprv,yprv;
        cin>>xprv>>yprv;
            if(xprv!=0)
                {
                    tot+=abs(xprv);
                }
            else if(yprv!=0)
                tot+=abs(yprv);

        for(lg i=0;i<n-1;i++)
        {
            cin>>x>>y;
            if(x!=0)
                {
                    tot+=(abs(x)+abs(yprv)+abs(xprv));
                    xprv=x;
                    yprv=y;
                }
            else if(y!=0)
                {
                    tot+=(abs(y)+abs(xprv)+abs(yprv));
                    xprv=x;
                    yprv=y;
                }
        }
        if(xprv!=0)
                {
                    tot+=abs(xprv);
                }
        else if(yprv!=0)
                tot+=abs(yprv);
        
        cout<<tot<<endl;
        
        

       
    }

    return 0;
}
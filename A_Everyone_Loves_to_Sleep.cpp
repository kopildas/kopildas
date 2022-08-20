#include <bits/stdc++.h>
using namespace std;

typedef long long lg;

const lg N = 10000000; // BIG LOOOOOOOOOL 7
lg ar[N];

int main()
{
    lg brk, n, t, k,h,m,ah,am;
    cin >> t;
    while (t--)
    {
        lg m;
        cin>>n>>h>>m;
        lg slp_m,slp;
        
        for(lg i=0;i<n;i++)
        {
            cin>>ah>>am;
            if(ah>h)
                {,
                    ar[i]=(60*(ah-h)+am-m);
                }
            else if(ah==h and am==m)
                ar[i]=0;
            else if(ah==h and am>m)
                ar[i]=am-m;
            else
                {
                    ar[i]=(((24-h)+ah)*60+am-m);
                }
        }
        sort(ar,ar+n);
        slp=ar[0]/60;
        slp_m=ar[0]%60;
        
        cout<<slp<<" "<<slp_m<<endl;
        
        

       
    }

    return 0;
}
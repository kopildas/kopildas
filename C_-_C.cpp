#include <bits/stdc++.h>
using namespace std;

typedef long long lg;

//const lg N = 10000000; // BIG LOOOOOOOOOL 7
// lg ar[N];

int main()
{
    lg brk, n, t, k,h,m,ah,am;

        lg a[3],b[3];
        cin>>a[0]>>a[1]>>a[2];
        cin>>b[0]>>b[1]>>b[2];
    lg i=3,j=3;
    lg ans=0;
    n=0;
        while(j--)
        {
            t=0;
            i=3;
            while(i--)
            {
                if((b[n]>a[t]) and a[t]!=0){
                    ans++;
                    a[t]=0;
                    break;
                }
                t++;
            }
            n++;
        }
        cout<<ans<<endl;
        
        
             
    

    return 0;
}
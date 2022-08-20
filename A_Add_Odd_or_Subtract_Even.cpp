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
        if(a==b){
            cout<<0<<endl;
        }
        else if(a<b)
        {
            if((b-a)%2!=0)
            {
                cout<<1<<endl;
            }
            else
            {
                cout<<2<<endl;
            }
        }
        else
        {
            if((a-b)%2!=0)
            {
                cout<<2<<endl;
            }
            else
            {
                cout<<1<<endl;
            }
        }
        
        
        

       
    }

    return 0;
}
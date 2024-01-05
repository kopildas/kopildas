#include <bits/stdc++.h>
using namespace std;

typedef long long lg;

const lg N = 10000000; // BIG LOOOOOOOOOL 7
lg ar[N];

int main()
{
    lg brk, n,j,q, t, k,h,m,ah,am,a,b,tmp;
    lg i;
    cin >> t;
    lg ca=1;
    while (t--)
    {

        lg n,q;
        cin>>n>>q;
        brk=n;
        i=0;
        while (n--)
        {
            cin>>ar[i++];
        }
        cout<<"Case "<<ca<<":"<<endl;
        while(q--)
        {
            lg l,r;
            cin>>l>>r;
            a=l;
            b=r;
            tmp=ar[l];
            while (l<r)
            {
                
                if(tmp<ar[l+1])
                    tmp=ar[l+1];
                l++;
            }
            lg ct=0;
            while (a<=b)
            {
                if(ar[a]==tmp)
                    ct++;
                a++;
            }
            cout<<ct<<endl;
            
            
        }
        
        
        
        ca++;
    
             
    }

    return 0;
}
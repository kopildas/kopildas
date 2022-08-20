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
        cin>>n;
        lg cnt=0,ev=0,od=0;
        if(n<=1)
        cnt=-1;
        for(lg i=0;i<n;i++)
        {
            cin>>ah;
            if((i%2)!=(ah%2))
                cnt++;
            
            if(ah%2==0)ev++;
            else od++;
            
        }
        
        if(n<=1)
            cout<<-1<<endl;
        else if(((ev!=od) and (n%2==0)))
            cout<<-1<<endl;
        else if((n%2!=0) and (n/2)>=ev)
            cout<<-1<<endl;
        else
            cout<<cnt/2<<endl;
        
        

       
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

typedef long long lg;

const lg N = 10000000; // BIG LOOOOOOOOOL 7


int main()
{
    lg brk, n, t, k,h,m,ah,am;
    cin >> n;
    lg sq=sqrt(n);
    vector<lg>v;
    for (lg i = 1; i <= sq; i++)
    {
        if(n%i==0)
        {
            v.push_back(i);
        }
    }
    t=v.size();
    t=v[t-1];
    lg val2=n/t;
    
    
    cout<<2*(t+val2)<<endl;
        
        

       
    

    return 0;
}
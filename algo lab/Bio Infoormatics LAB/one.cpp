#include <bits/stdc++.h>
using namespace std;

typedef long long lg;

//const lg N = 10000000; // BIG LOOOOOOOOOL 7
// lg ar[N];

int main()
{
    lg brk, n,j, t, k,h,m,ah,am,a,b,c;
    string s;
    cin>>s;
    lg len =s.size();
    for (size_t i = 0; i < len; i++)
    {
        if(s[i]=='A')
            cout<<"T";
        else if(s[i]=='C')
            cout<<"G";
        else if(s[i]=='G')
            cout<<"C";
        if(s[i]=='T')
            cout<<"A";
        
    }
    cout<<endl;
    
    
        
        
       

    return 0;
}
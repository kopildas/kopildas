// “Ayo, these ain’t lookin like shooting stars”
// 
//                                    -Dinosaurs


#include <bits/stdc++.h>
using namespace std;

typedef long long lg;

//const lg N = 10000000; // BIG LOOOOOOOOOL 7
// lg ar[N];

int main()
{
    bool flag=true;

    lg brk, n,j, t, k,h,m,ah,am,a,b,c;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        lg for_a=a-1;
        lg for_b=abs(b-c)+abs(c-1);
        if(for_a>for_b)
            cout<<2<<endl;
        else if(for_a<for_b)
            cout<<1<<endl;
        else
            cout<<3<<endl;
    }
    
    
        
        
       

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

typedef long long lg;

//const lg N = 10000000; // BIG LOOOOOOOOOL 7
// lg ar[N];

int main()
{
    lg brk, n, k,h,m,ah,am,b;
    lg i=1;
    string s;
    cin >> s;
    lg sz=s.size();
    lg a=0,c=0,g=0,t=0;
    cout<<"Total nucleotides = "<<sz<<endl;
    for (size_t i = 0; i < sz; i++)
    {
        if(s[i]=='A')a++;
        else if(s[i]=='C')c++;
        else if(s[i]=='G')g++;
        else if(s[i]=='U')t++;
    }
    cout<<"Adenine = "<<a<<endl;
    cout<<"Cytosine = "<<c<<endl;
    cout<<"Guanine = "<<g<<endl;
    cout<<"Uracil = "<<t<<endl;
    //permutation ta aibo re korio
    

    return 0;
}
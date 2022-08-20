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
        string s;
        vector<lg>v;
        cin>>s;

         while (1)  
        {  
            ah=stoi(s);
            v.push_back(ah); 
            if (!next_permutation(begin(s), end(s)))  
                break;  
        }  
        lg sz=  v.size(),flg=1;
        for (lg i = 0; i < sz; i++)
        {
            cout<<v[i]<<endl;
            if(v[i]%60==0)
            {
               // cout<<"red"<<endl;
                flg=0;
            }
        }
        cout<<endl;
        //if(flg)
           // cout<<"cyan"<<endl;
       
    }

    return 0;
}
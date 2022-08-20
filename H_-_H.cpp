#include <bits/stdc++.h>
using namespace std;

typedef long long lg;

//const lg N = 10000000; // BIG LOOOOOOOOOL 7
// lg ar[N];

int main()
{
    lg brk, n,j, t, k=1,h,m,ah,am,a,b,x,c;
    lg i=1;
    cin >> t;
    string s;
    
    while (t--)
    {
        cout<<"Case "<<i++<<":"<<endl;
        vector<lg>lf;
        vector<lg>rf;
        cin>>n>>m;
        lg qu=1;

        for(k=0;k<m;k++)
        {
            cin>>s;
            cin>>x;
            if(s[1]=='u' and qu<m)
            {
                if(s[4]=='L')
                    {
                        cout<<"Pushed in left: "<<s[9]<<endl;
                        lf.push_back(s[9]-'0');
                    }
                else
                    {
                        cout<<"Pushed in right: "<<s[10]<<endl;
                        rf.push_back(s[10]-'0');
                    }
                qu++;
            }
            else if(s[1]=='u' and qu>m)
                cout<<"The queue is full";


            if(s[1]=='o' and qu<=m)
            {
                if(s[3]=='L'){
                    lg sz=lf.size();
                    cout<<"Popped from left: "<<lf[sz-1]<<endl;
                    lf.pop_back();

                }
                if(s[3]=='R'){
                    lg sz=rf.size();
                    cout<<"Popped from right: "<<lf[sz-1]<<endl;
                    rf.pop_back();

                }
                qu--;

            }
            else if(s[1]=='o' and qu<0)
            {
                cout<<"The queue is empty"<<endl;
            }
        }
       
            
    
             
    }

    return 0;
}
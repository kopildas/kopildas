#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long int ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) {
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(auto &i : v) cin>>i;
        //5 4 2 1 3 //k=3
        bool arr[k+1];
        memset(arr,0,sizeof arr);
        
        for(int i=0;i<k;i++) {
            if(v[i]<=k) arr[v[i]]=1;
        }
        
        int c=0;
        for(int i=1;i<=k;i++) {
            if(arr[i]==0) {
                c++;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
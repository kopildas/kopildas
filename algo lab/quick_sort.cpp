
#include <bits/stdc++.h>
using namespace std;

typedef long long lg;

const lg N = 10000000; // BIG LOOOOOOOOOL 7
lg aray[N];

// lg partition(lg ar[],lg p,lg r){
//     lg x=ar[r];
//     lg i=p-1;
//     for (size_t k = p; k < r-1; k++)
//     {
//         if(ar[k]<=x)
//         {
//             i=i+1;
//             swap(ar[i],ar[k]);
//         }
//     }
//     swap(ar[i+1],ar[r]);
//     return i+1;
    


// }
lg partition(lg ar[],lg p,lg r){
    lg x=ar[p];
    lg i=p+1;
    for (size_t k = i; k <= r; k++)
    {
        if(ar[k]<=x)
        {
            i=i+1;
            swap(ar[i],ar[k]);
        }
    }
    swap(ar[i+1],ar[r]);
    return i+1;
    


}

void quicksort(lg ar[], lg p,lg r){
    if(p<r)
    {
        lg q=partition(ar,p,r);
        quicksort(ar,p,q-1);
        quicksort(ar,q+1,r);

    }
}

int main()
{
    lg brk, n,j, t, k,h,m,ah,am,a,b;
    lg i=1;

        cout<<"Enter Number of items "<<endl;
        cin>>t;
        for (size_t i = 0; i < t; i++)
        {
            aray[i]=rand()%100;
            cout<<aray[i]<<endl;
        }

        quicksort(aray, 0 ,t-1);
cout<<endl;
        for (size_t i = 0; i < t; i++)
        {
            cout<<aray[i]<<endl;
        }
        



    return 0;
}
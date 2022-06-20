#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n,q;
    cin>>n>>q;

    long long a[n];

    for(int i=0;i<n;i++)
    {
       cin>>a[i];
    }

    sort(a,a+n,greater<int>());

   

        long long  ans=0;

        vector<long long> pre(n+1);

        for(int i=0;i<n;i++)
        {
            pre[i+1]=pre[i]+a[i];
        }
    while(q--)
    {
        long long x,y;
        cin>>x>>y;


        ans=pre[x]-pre[x-y];

        cout<<ans<<"\n";
        


    }
    return 0;
}
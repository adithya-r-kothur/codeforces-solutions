#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;

    cin>>n>>m;

    if(m>n)
    {
        cout<<-1<<"\n";
    }

    if((n%2==0 && n>m) || (n%2==0 && n==m))
    {
        int ans=n/2;
        if(ans%m==0)
        {
            cout<<ans<<"\n";
        }
        else
        {
            cout<<((floor(ans/m))+1)*m<<"\n";
        }
    }
    else if(m<n || m==n)
    {
        int ans2=(n/2)+(n%2);

        if(ans2%m==0)
        {
            cout<<ans2<<"\n";
        }
        else
        {
            cout<<((floor(ans2/m))+1)*m<<"\n";
        }
    }

    

    return 0;
}
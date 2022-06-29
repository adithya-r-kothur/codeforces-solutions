#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,d;
    cin>>n>>d;

    int a[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
       cin>>a[i];
       sum+=a[i];

    }

   // cout<<sum<<"\n";

    if(sum>d || (n-1)*10 >=d || (d-sum)<((n-1)*10))
    {
        cout<<-1<<"\n";
    }
    
    else
    {
        int ans=d-sum;
        cout<<ans/5<<"\n";
    }

    
    return 0;
}

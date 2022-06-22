#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int x[n],y[n],z[n];

    for(int i=0;i<n;i++)
    {
       cin>>x[i]>>y[i]>>z[i];
    }

    int xtot=0,ytot=0,ztot=0;

    for(int i=0;i<n;i++)
    {
      xtot+=x[i];
      ytot+=y[i];
      ztot+=z[i];

    }

    if(xtot ==0 && ytot==0 && ztot==0)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
    return 0;
}
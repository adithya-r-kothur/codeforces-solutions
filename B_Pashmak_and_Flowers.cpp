#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n,maxi=INT_MIN,mini=INT_MAX;
    cin>>n;
    long long b[n];
    for(int i=0;i<n;i++)
    {
      cin>>b[i];
      if(b[i]<mini)
        mini =b[i];
      if(b[i]>maxi)
        maxi=b[i];  
    }

    long long cntmax=0,cntmin=0;

    for(int i=0;i<n;i++)
    {
      if(b[i]==mini)
        cntmin++;
      if(b[i]==maxi)
        cntmax++;  
    }

    if(maxi==mini)
    {
        cout<<maxi-mini<<" "<<(n*(n-1))/2<<"\n";
    }
    else
    {
        cout<<maxi-mini<<" "<<cntmax*cntmin<<"\n";
    }


    return 0;
}
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int k,ans=0,count=0;
    cin>>k;
    int a[12];
    for(int i=0;i<12;i++)
    {
      cin>>a[i];
    }

    sort(a,a+12,greater<int>());
    for(int i=0;i<12;i++)
    {
        ans+=a[i];
        count++;
        if(ans>=k)
        {
            break;
        }
    }

    if(k==0)
    {
        cout<<"0\n";
    }
    else if(ans>=k)
        cout<<count<<"\n";
    else
        cout<<"-1\n";    
    return 0;
}
#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n;

    cin>>n;

    int intial=0;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        int ai,bi;
        cin>>ai>>bi;
        intial +=bi-ai;
        ans=max(intial,ans);
        
    }

    cout<<ans<<"\n";

    return 0;
}
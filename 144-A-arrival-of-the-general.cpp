#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n];
    int maxi=INT_MIN,mini=INT_MAX;


    for(int i=0;i<n;i++)
    {
       cin>>a[i];
       maxi=max(maxi,a[i]);
       mini=min(mini,a[i]);
    }
    
    int maxpos=INT_MAX;

    for(int i=0;i<n;i++)
    {
        if(maxi==a[i] )
        {
            maxpos=i;
            maxpos=min(maxpos,i);
            
        }
    }

    int minpos=INT_MIN;




    for(int i=0;i<n;i++)
    {
        if(mini==a[i] )
        {
            minpos=i;
            minpos=max(minpos,i);
            
        }
    }

    int ans=0;

    if((maxpos>n/2 && minpos<n/2) || (maxpos<=n/2 && minpos<=n/2 && minpos<maxpos) ||(maxpos>=n/2 && minpos>=n/2 && minpos>maxpos))
    {
        ans=maxpos+((n-1)-(minpos))-1;
    }
    else if(maxpos<n/2 && minpos>n/2)
    {
        ans=maxpos+((n-1)-(minpos));
    }

    cout<<ans<<" \n";
    
    


    return 0;
}
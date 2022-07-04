#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,c;
    cin>>n>>c;

    int a[n];
    

    for(int i=0;i<n;i++)
    {
       cin>>a[i];
    }

    
    

        int diff=INT_MIN,count=0;

    for(int i=0;i<n-1;i++)
    {
        int diff1=a[i]-a[i+1];
        if(diff1<0)
        {   count++;
            continue;
        }
        else
        {
            diff=max(diff,a[i]-a[i+1]);
        }
    }
        if(count==n-1 || diff<c)
        {
            cout<<"0\n";
        }
        else
        {
            cout<<diff-c<<"\n";
        }
    
    

    return 0;
}

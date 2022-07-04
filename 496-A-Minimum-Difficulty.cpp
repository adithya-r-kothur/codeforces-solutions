#include<bits/stdc++.h>


using namespace std;

int main()
{
    int n;
    cin>>n;
    int diff=INT_MIN;

    int a[n];
    for(int i=0;i<n;i++)
    {
       cin>>a[i];
    }

    if(n==3)
    {
        cout<<abs(a[0]-a[2])<<"\n";
    }
    else
    {
        for(int i=0;i<n-1;i++)
        {
            diff=max(diff,abs(a[i]-a[i+1]));

        }
        cout<<diff<<"\n";
    }

    return 0;
}
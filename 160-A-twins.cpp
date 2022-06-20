#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin>>n;

    int a[n];
    int totalsum=0;

    for(int i=0;i<n;i++)
    {
       cin>>a[i];
       totalsum+=a[i];
    }

    sort(a,a+n,greater<int>());

    int per[n+1];
    per[0]=a[0];

    for(int i=0;i<n;i++)
    {
        per[i+1]=per[i]+a[i+1];
        int diff=totalsum-per[i];
        if(diff<per[i])
        {
            cout<<i+1;
            break;

        }
    }

    
    return 0;
}
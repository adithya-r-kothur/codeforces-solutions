#include<bits/stdc++.h>


using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    int a[m];

    for(int i=0;i<m;i++)
    {
       cin>>a[i];
    }

    sort(a,a+m,greater<int>());

    int diff=INT_MAX;

    for(int i=0;i<m-(n-1);i++)
    {
        diff=min((a[i]-a[i+(n-1)]),diff);
        
    }

    cout<<diff<<"\n";
    return 0;
}
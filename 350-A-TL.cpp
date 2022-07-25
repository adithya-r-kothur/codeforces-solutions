#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int right[n];
    int wrong[m];
    
    for(int i=0;i<n;i++)
    {
       cin>>right[i];
    }

    for(int i=0;i<m;i++)
    {
       cin>>wrong[i];
    }
    sort(right,right+n);
    sort(wrong,wrong+m);



int val=max(right[n-1],2*right[0]);

if(val<wrong[0])
{
    cout<<val<<"\n";
}
else
{
    cout<<"-1\n";
}
    return 0;
}
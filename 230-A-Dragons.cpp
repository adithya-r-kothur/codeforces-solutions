#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,s;

    cin>>s>>n;

    int x[n];

    int y[n];

    for(int i=0;i<n;i++)
    {
       cin>>x[i]>>y[i];
    }

    sort(x,x+n,greater<int>());
    //sort(y,y+n,greater<int>());

    if(s<x[n-1])
    {
        cout<<"NO\n";
    }
    else
    {

    }




    return 0;
}
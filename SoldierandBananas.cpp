#include<bits/stdc++.h>

using namespace std;

int main()
{
    int k,n,w;

    cin>>k>>n>>w;

    int i=1;

    while(i<=w)
    {
        n=n-(i*k);
        i++;
    }

     if(n<0)
    {
        cout<<abs(n)<<"\n";
    }
    else
    {
        cout<<0<<"\n";
    }
    return 0;
}
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n ;
        cin>>n;

        int x = n%2020;
        int y = (n-x)/2020 - x;

        if(y>=0 && 2020*y+2021*x==n)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}
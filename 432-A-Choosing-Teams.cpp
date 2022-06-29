#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;

    int a[n];
    int count=0;

    for(int i=0;i<n;i++)
    {
       cin>>a[i];

       if((5-a[i])>=k)
       {
           count++;
       }
    }

    cout<<count/3<<"\n";

   return 0;
}
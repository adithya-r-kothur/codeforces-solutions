#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    int negnum=0,posnum=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
       cin>>a[i];
       if(a[i]<0)
       {
        negnum++;
       }
       else
       {
        posnum++;
       }
    }

    if(negnum%2!=0)
    {
        
    }
    return 0;
}
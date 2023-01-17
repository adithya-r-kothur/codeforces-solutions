#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[7];
    for(int i=0;i<7;i++)
    {
      cin>>a[i];
    }

    int dup = n,i=0;
    while(1)
    {
        dup=dup-a[i];
        if(dup<=0)
        {
          cout<<i+1<<"\n";
          break;
        }
        i = (i+1)%7;
    }
    return 0;
}
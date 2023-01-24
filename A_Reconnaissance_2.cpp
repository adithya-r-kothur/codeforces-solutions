#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int mini=INT16_MAX,diff,pos1=INT16_MAX,pos2=INT16_MAX;
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }

    

    for(int i=1;i<n;i++)
    {
      diff=abs(a[i]-a[i-1]);
      if(diff<mini)
      {
        mini=diff;
        int c =i-1;
        pos1=c;
        pos2=i;

      }
    }

    int  newdiff = abs(a[n-1]-a[0]);

    if(newdiff<mini)
    {
        pos1=n;
        pos2=1;
        cout<<pos1<<" "<<pos2<<"\n";
    }
    else
    {
        cout<<pos1+1<<" "<<pos2+1<<"\n";
    }



    return 0;
}
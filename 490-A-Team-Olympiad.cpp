#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];

    int countp=0,countm=0,counts=0;

    int p[n],m[n],s[n];

    int k=0,l=0,x=0;

    for(int i=0;i<n;i++)
    {
       cin>>a[i];
       if(a[i]==1)
       {
           countp++;
           p[k]=i;
           k++;
       }
       if(a[i]==2)
       {
           countm++;
           m[l]=i;
           l++;
       }
       if(a[i]==3)
       {
           counts++;
           s[x]=i;
           x++;
       }

    }
      // cout<<countp<<" "<<countm<<" "<<counts<<"\n";

      int numteams;

      numteams=min(countp,min(countm,counts));
      cout<<numteams<<"\n";

      for(int i=0;i<numteams;i++)
      {
        cout<<p[i]+1<<" "<<m[i]+1<<" "<<s[i]+1<<"\n";
      }



    return 0;
}
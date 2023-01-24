#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long a[n],mini=INT_MAX,pos=0,flag=0;
    
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
      
      if(a[i]<=mini)
      {
        mini=a[i];
        pos=i;

      }
      
    }
    sort(a,a+n);

    
    for(int i=0;i<n;i++)
    {
      if(a[i]==a[i+1] && a[i]==mini)
      {
        flag=1;
        break;
      }
    }
    if(flag==1)
    {
        cout<<"Still Rozdil";
    }
    else
    {
        cout<<pos+1<<"\n";
    }


    return 0;
}
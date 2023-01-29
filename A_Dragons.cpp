#include<bits/stdc++.h>

using namespace std;

struct stre
{
    int x,y;
};

bool comparexy(stre a , stre b)
{
    if(b.x>a.x)
        return 1;
    if(b.x==a.x)
    {
        if(b.y<a.y)
            return 1;
    }            

    return 0;
}

int main()
{
    int s,n,flag=1;
    cin>>s>>n;

    stre a[n];
    for(int i=0;i<n;i++)
    {
      cin>>a[i].x>>a[i].y;
    }


    sort(a,a+n,comparexy);

    for(int i=0;i<n;i++)
    {
        
      if(a[i].x<s)
        s+=a[i].y;
      else
      {  
        flag=0;
        break;
      }   
    }

    if(flag!=0)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
    return 0;
}
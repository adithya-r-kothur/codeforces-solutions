#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,count=0,pos;
    cin>>n;
    vector<string> s;
    for(int i=0;i<n;i++)
    {
      string a;
      cin>>a;
      s.push_back(a);
    }

    for(int i=0;i<n;i++)
    {
      if(s[i]==s[0])
      {
        count++;
      }
      else
      {
        pos=i;
      }
    }

    //count+=1;
    //cout<<count<<"\n";
    if(n==1)
    {
        cout<<s[0]<<"\n";
    }
    else
    {
        if(count>(n-count))
    {
        cout<<s[0]<<"\n";
    }
    else
    {
        cout<<s[pos]<<"\n";
    }
    }
    return 0; 
}